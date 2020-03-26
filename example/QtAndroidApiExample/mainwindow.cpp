#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <memory>
#include <QDebug>
#include <QTimer>

#include <QtAndroidExtras/QtAndroid>
#include "../../android-29/android/widget/Toast.hpp"
#include "../../android-29/android/app/ProgressDialog.hpp"

using namespace android::widget;
using namespace android::app;

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
		Toast toast = Toast::makeText(android::content::Context(QtAndroid::androidContext()),
									  QAndroidJniObject::fromString(message).object<jstring>(),
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
		progressDialog = std::make_shared<ProgressDialog>(android::content::Context(QtAndroid::androidActivity()));

		progressDialog->setCancelable(false);
		progressDialog->setTitle(QAndroidJniObject::fromString(title).object<jstring>());
		progressDialog->setMessage(QAndroidJniObject::fromString(message).object<jstring>());

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
		progressDialog = std::make_shared<ProgressDialog>(android::content::Context(QtAndroid::androidActivity()));

		progressDialog->setCancelable(false);
		progressDialog->setTitle(QAndroidJniObject::fromString(title).object<jstring>());
		progressDialog->setMessage(QAndroidJniObject::fromString(message).object<jstring>());

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
