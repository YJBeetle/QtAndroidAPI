#include "mainwindow.hpp"
#include "ui_mainwindow.h"

#include <memory>
#include <QDebug>
#include <QTimer>

#include <__JniUtils.hpp>
#include <android/widget/Toast.hpp>
#include <android/app/ProgressDialog.hpp>
#include <android/app/AlertDialog_Builder.hpp>
#include <android/content/Intent.hpp>

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
    QtAndroid::runOnAndroidThreadSync([message] {
        auto toast = Toast::makeText(CONTEXT,
                                     JSTRING(message),
                                     0);
        toast.show();
    });
}

void MainWindow::on_showProgressDialogSpinner_clicked()
{
    auto title = ui->progressDialogTitle->text();
    auto message = ui->progressDialogText->text();

    std::shared_ptr<ProgressDialog> progressDialog;

    QtAndroid::runOnAndroidThreadSync([&progressDialog, title, message] {
        progressDialog = std::make_shared<ProgressDialog>(CONTEXT);

        progressDialog->setCancelable(false);
        progressDialog->setTitle(JSTRING(title));
        progressDialog->setMessage(JSTRING(message));

        progressDialog->Dialog::show();
    });

    QTimer::singleShot(1000, [progressDialog]() {
        progressDialog->cancel();
    });
}

void MainWindow::on_showProgressDialogHorizontal_clicked()
{
    auto title = ui->progressDialogTitle->text();
    auto message = ui->progressDialogText->text();

    std::shared_ptr<ProgressDialog> progressDialog;

    QtAndroid::runOnAndroidThreadSync([&progressDialog, title, message] {
        progressDialog = std::make_shared<ProgressDialog>(CONTEXT);

        progressDialog->setCancelable(false);
        progressDialog->setTitle(JSTRING(title));
        progressDialog->setMessage(JSTRING(message));

        progressDialog->setProgressStyle(ProgressDialog::STYLE_HORIZONTAL());
        progressDialog->setMax(PROGRESS_DIALOG_MAX);

        progressDialog->Dialog::show();
    });

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

void MainWindow::on_showAlert_clicked()
{
    QtAndroid::runOnAndroidThreadSync([] {
        auto dialog = AlertDialog_Builder(CONTEXT);
        dialog.setMessage(JSTRING("提示信息"));
        dialog.setTitle(JSTRING("标题"));
        dialog.setNegativeButton(JSTRING("取消"), QAndroidJniObject());
        dialog.setPositiveButton(JSTRING("确定"), QAndroidJniObject());
        dialog.show();
    });
}

void MainWindow::on_openFile_clicked() // WIP
{
    QtAndroid::runOnAndroidThreadSync([] {
        auto intent = Intent(Intent::ACTION_GET_CONTENT());
        intent.setType(JSTRING("image/*"));


//            if (intent.resolveActivity(getPackageManager()) != null) {
//                startActivityForResult(intent, REQUEST_IMAGE_GET);
//            }

    });
}
