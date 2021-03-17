#include "registrwindow.h"
#include "ui_registrwindow.h"
#include "work.h"
#include "functions.h"

RegistrWindow::RegistrWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegistrWindow)
{
    ui->setupUi(this);
}

RegistrWindow::~RegistrWindow()
{
    delete ui;
}

void RegistrWindow::on_back_button_clicked()
{
    this->close();
    emit signReg();
}

void RegistrWindow::on_sign_up_button_clicked()
{
    QString login = ui->login_->text();
    QString password = ui->password_->text();
    if (registration(login.toStdString(),password.toStdString()))// Отправка логина и пароля
    {
        this->on_back_button_clicked();
    }
    else
    {
        this->on_back_button_clicked();
    }
}
