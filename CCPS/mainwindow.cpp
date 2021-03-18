#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QPixmap>
#include <QScreen>
#include <QApplication>
#include <QScreenOrientationChangeEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->info->setVisible(false);

    QPixmap pix(":/images/CCPS-3.png");

    work = new Work;
    registr = new RegistrWindow;

    connect(work, &Work::signM, this, &MainWindow::show);
    connect(registr, &RegistrWindow::signReg, this, &MainWindow::show);

    QScreen* screen = QApplication::screens().at(0);
    QSize size = screen->availableSize();

    QString text = QString("%1").arg(size.width()) + "x" + QString("%1").arg(size.height());

    ui->picture->setPixmap(pix.scaled(size.width() * 0.5, size.width() * 0.5, Qt::AspectRatioMode(true)));
    ui->picture->setGeometry(size.width() * 0.25, size.height() * 0.04, size.width() * 0.5, size.width() * 0.5);

    ui->info->setGeometry(size.width() * 0.15, size.height() * 0.3, size.width() * 0.7, size.height() * 0.15);

    ui->pushButton->setGeometry(size.width() * 0.1, size.height() * 0.8, size.width() * 0.8, size.height() * 0.07);
    ui->pushButton_2->setGeometry(size.width() * 0.1, size.height() * 0.9, size.width() * 0.8, size.height() * 0.07);

    ui->label_2->setGeometry(size.width() * 0.15, size.height() * 0.5, size.width() * 0.7, size.height() * 0.05);
    //ui->password->setText(text);
    ui->password->setGeometry(size.width() * 0.15, size.height() * 0.55, size.width() * 0.7, size.height() * 0.05);

    ui->label->setGeometry(size.width() * 0.15, size.height() * 0.4, size.width() * 0.7, size.height() * 0.05);
    ui->login->setGeometry(size.width() * 0.15, size.height() * 0.45, size.width() * 0.7, size.height() * 0.05);
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
        ui->info->setVisible(true);
        ui->info->setWordWrap(true); // если отрицание, никуда не переходим
    }
}

void MainWindow::on_pushButton_2_clicked() // кнопка регистрация-назад
{
    registr->show();
    this->close();
}
