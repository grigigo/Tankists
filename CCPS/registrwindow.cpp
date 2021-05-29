#include "registrwindow.h"
#include "ui_registrwindow.h"

RegistrWindow::RegistrWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegistrWindow)
{
    ui->setupUi(this);

    QScreen* screen = QApplication::screens().at(0);
    QSize size = screen->availableSize();

    ui->sign_up_button->setGeometry(size.width() * 0.1, size.height() * 0.78, size.width() * 0.8, size.height() * 0.07);
    ui->back_button->setGeometry(size.width() * 0.1, size.height() * 0.88, size.width() * 0.8, size.height() * 0.07);

    ui->login_1->setGeometry(size.width() * 0.15, size.height() * 0.3, size.width() * 0.7, size.height() * 0.05);
    ui->login_edit->setGeometry(size.width() * 0.15, size.height() * 0.35, size.width() * 0.7, size.height() * 0.05);

    ui->password_1->setGeometry(size.width() * 0.15, size.height() * 0.4, size.width() * 0.7, size.height() * 0.05);
    ui->password_edit->setGeometry(size.width() * 0.15, size.height() * 0.45, size.width() * 0.7, size.height() * 0.05);
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
    Functions *user = new Functions();

    QString login = ui->login_edit->text();
    QString password = ui->password_edit->text();

    if (user->registration(login, password))// Отправка логина и пароля
    {
        this->on_back_button_clicked();
    }
    else
    {
        this->on_back_button_clicked();
    }
}
