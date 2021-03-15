#include "registrationwind.h"
#include "ui_registrationwind.h"
#include "work.h"
#include "functions.h"

registrationwind::registrationwind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationwind)
{
    ui->setupUi(this);
}

registrationwind::~registrationwind()
{
    delete ui;
}

void registrationwind::on_sign_up_button_clicked()
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
void registrationwind::on_back_button_clicked()
{
    this->close();
    emit signReg();
}
