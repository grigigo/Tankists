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


void registrationwind::on_pushButton_3_clicked()
{
    QString login = ui->login_->text();
     QString password = ui->password_->text();
     if (registration(login.toStdString(),password.toStdString()))// Отправка логина и пароля
     {
         //ui->horizontalLayout_3->setVisible(false);
         ui->Autho->setVisible(false);
         //ui->horizontalLayout_5->setVisible(true);
     }
     else
     {

         //ui->label_6->setVisible(true);
     }
}
