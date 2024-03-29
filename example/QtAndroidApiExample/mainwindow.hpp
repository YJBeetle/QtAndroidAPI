#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_showToast_clicked();
    void on_showProgressDialogSpinner_clicked();
    void on_showProgressDialogHorizontal_clicked();
    void on_showAlert_clicked();
    void on_openFile_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
