#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QPixmap>
#include <QScreen>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->info->setVisible(false);

    QRect r = QWidget::frameGeometry();

    QPixmap pix(":/images/poop.png");

    /*int pix_w = ui->picture->width();
    int pix_h = ui->picture->height();*/


    ui->picture->setPixmap(pix.scaled(r.width()/1.5, r.width()/1.5, Qt::KeepAspectRatio));
    //ui->pushButton->setFixedSize(r.width(), r.height()*0.1 );
   // ui->pushButton->setMinimumHeight(r.width()*2);

    work = new Work;
    registr = new RegistrWindow;

    connect(work, &Work::signM, this, &MainWindow::show);
    connect(registr, &RegistrWindow::signReg, this, &MainWindow::show);
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
        ui->info->setWordWrap(true); // если отрицание, никуда не переходим

        ui->info->setVisible(true);
        //ui->info->setText("Неправильный логин или пароль")
    }
}

void MainWindow::on_pushButton_2_clicked() // кнопка регистрация-назад
{
    registr->show();
    this->close();
}
