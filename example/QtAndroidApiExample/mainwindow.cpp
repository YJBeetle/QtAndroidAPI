#include "mainwindow.hpp"
#include "ui_mainwindow.h"

#include <memory>
#include <QDebug>
#include <QTimer>

#include <QJniEnvironment>

#include <__JniUtils.hpp>
#include <JString.hpp>
#include <android/widget/Toast.hpp>
#include <android/app/ProgressDialog.hpp>
#include <android/app/AlertDialog_Builder.hpp>
#include <android/content/Intent.hpp>
#include <android/net/Uri.hpp>

using namespace android::widget;
using namespace android::app;
using namespace android::content;

#define PROGRESS_DIALOG_MAX 170001

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_showToast_clicked()
{
    auto message = ui->toastText->text();
    QNativeInterface::QAndroidApplication::runOnAndroidMainThread([message] {
        auto toast = Toast::makeText(CONTEXT,
                                     message,
                                     0);
        toast.show();
    });
}

void MainWindow::on_showProgressDialogSpinner_clicked()
{
    auto title = ui->progressDialogTitle->text();
    auto message = ui->progressDialogText->text();

    std::shared_ptr<ProgressDialog> progressDialog;

    QNativeInterface::QAndroidApplication::runOnAndroidMainThread([&progressDialog, title, message] {
        progressDialog = std::make_shared<ProgressDialog>(CONTEXT);

        progressDialog->setCancelable(false);
        progressDialog->setTitle(title);
        progressDialog->setMessage(message);

        progressDialog->Dialog::show();
    }).waitForFinished();

    QTimer::singleShot(1000, [progressDialog]() {
        progressDialog->cancel();
    });
}

void MainWindow::on_showProgressDialogHorizontal_clicked()
{
    auto title = ui->progressDialogTitle->text();
    auto message = ui->progressDialogText->text();

    std::shared_ptr<ProgressDialog> progressDialog;

    QNativeInterface::QAndroidApplication::runOnAndroidMainThread([&progressDialog, title, message] {
        progressDialog = std::make_shared<ProgressDialog>(CONTEXT);

        progressDialog->setCancelable(false);
        progressDialog->setTitle(title);
        progressDialog->setMessage(message);

        progressDialog->setProgressStyle(ProgressDialog::STYLE_HORIZONTAL());
        progressDialog->setMax(PROGRESS_DIALOG_MAX);

        progressDialog->Dialog::show();
    }).waitForFinished();

    static int i;
    i = 0;
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, [progressDialog, timer]() {
        if (i < PROGRESS_DIALOG_MAX)
        {
            i += PROGRESS_DIALOG_MAX / 500;
            progressDialog->setProgress(i);
        }
        else
        {
            progressDialog->cancel();
            delete timer;
        }
    });
    timer->start(10);
}

static void fromJavaAlertDialogPositive(JNIEnv *env, jobject thiz)
{
    Q_UNUSED(env)
    Q_UNUSED(thiz)
    qDebug() << "Positive button clicked!";
}

void MainWindow::on_showAlert_clicked()
{
    QNativeInterface::QAndroidApplication::runOnAndroidMainThread([] {
        auto dialog = AlertDialog_Builder(CONTEXT);
        dialog.setMessage(QStringLiteral("提示信息"));
        dialog.setTitle(QStringLiteral("标题"));

        JNINativeMethod methods[] {{"callCppAlertDialogPositive", "()V", reinterpret_cast<void *>(fromJavaAlertDialogPositive)}};
        QJniObject javaClass("QtAndroidApiExample/mainwindow");
        QJniEnvironment env;
        jclass objectClass = env->GetObjectClass(javaClass.object<jobject>());
        env->RegisterNatives(objectClass,
                             methods,
                             sizeof(methods) / sizeof(methods[0]));
        env->DeleteLocalRef(objectClass);

        auto clickListener = QJniObject::getStaticObjectField(
            "QtAndroidApiExample/mainwindow",
            "clickListener",
            "Landroid/content/DialogInterface$OnClickListener;"
            );

        dialog.setNegativeButton(QStringLiteral("取消"), JObject());
        dialog.setPositiveButton(QStringLiteral("确定"), clickListener);
        dialog.show();
    }).waitForFinished();
}

// https://doc.qt.io/qt-6/qtandroidprivate.html#startActivity-2
namespace QtAndroidPrivate
{
    Q_CORE_EXPORT void startActivity(const QJniObject &intent,
                                     int receiverRequestCode,
                                     std::function<void(int, int, const QJniObject &data)>
                                                        callbackFunc);
}

void MainWindow::on_openFile_clicked()
{
    QNativeInterface::QAndroidApplication::runOnAndroidMainThread([] {
        auto intent = Intent(Intent::ACTION_GET_CONTENT());
        // auto intent = Intent(Intent::ACTION_CREATE_DOCUMENT);

        intent.addCategory(Intent::CATEGORY_OPENABLE());
        intent.setType(QStringLiteral("*/*"));
        // intent.putExtra(Intent::EXTRA_TITLE(), QStringLiteral("file.txt"));

        QtAndroidPrivate::startActivity(intent, 1, [](int receiverRequestCode, int resultCode, const Intent &data){
            qDebug()<< "handleActivityResult";
            auto uri = data.getData();
            qDebug() << uri.toString().toString();
        });
    });
}
