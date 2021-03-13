#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "work.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Autho->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()  // кнопка авторизация
{
    QString login = ui->login->text();
     QString password = ui->password->text();

     if (authorize(login.toStdString(),password.toStdString()))// Проверка логина и пароля
     {
         close(); // если приходит подтверждение, то переходим на рабочую страницу
         work=new Work(this);
         work->show();
     }
     else
     {
         ui->info->setText("Неправильный логин или пароль.Повторите авторизацию или зарегистрируйтесь.");
         ui->info->setWordWrap(true); // если отрицание, никуда не переходим
     }
}

void MainWindow::on_pushButton_2_clicked() // кнопка регистрация-назад
{
    QString temp=ui->pushButton_2->text();
    if (temp=="Назад")
    {
    ui->pushButton_2->setText("Регистрация");
    ui->authorization->setVisible(true);
    ui->Autho->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    }
    else
    {
    ui->authorization->setVisible(false);
    ui->pushButton_2->setText("Назад");
    ui->Autho->setVisible(true);
    }

}

void MainWindow::on_pushButton_3_clicked() // кнопка отправить заявку
{
    QString login = ui->login_->text();
     QString password = ui->password_->text();
     if (registration(login.toStdString(),password.toStdString()))// Отправка логина и пароля
     {
         ui->label_6->setVisible(false);
         ui->Autho->setVisible(false);
         ui->label_5->setVisible(true);
     }
     else
     {

         ui->label_6->setVisible(true);
     }
}
