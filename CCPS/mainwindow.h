#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mytcpclient.h"
#include "functions.h"
#include "work.h"
#include "registrwindow.h"
#include "mytcpclient.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void qwerty();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void onLoginYes();
    void onLoginNope();

private:
    QString answer;
    Ui::MainWindow *ui;
    Work *work;
    RegistrWindow *registr;
    MyTcpClient *mytcpclient;
    Functions *user;
};
#endif // MAINWINDOW_H
