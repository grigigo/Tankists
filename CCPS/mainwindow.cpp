#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "work.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->Autho->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);

    work = new Work;

    connect(work, &Work::signM, this, &MainWindow::show);
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
        work->show();
        this->close();
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
    //ui->Autho->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    }
    else
    {
    ui->authorization->setVisible(false);
    ui->pushButton_2->setText("Назад");
    //ui->Autho->setVisible(true);
    }

}