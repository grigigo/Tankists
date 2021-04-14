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

    //std::string mylogin = "";

    QPixmap pix(":/images/CCPS-3.png");

    work = new Work;
    registr = new RegistrWindow;

    connect(work, &Work::signM, this, &MainWindow::show);
    connect(registr, &RegistrWindow::signReg, this, &MainWindow::show);

    QScreen* screen = QApplication::screens().at(0);
    QSize size = screen->availableSize();

    if (size.width() < size.height()) {
        ui->picture->setPixmap(pix.scaled(size.width() * 0.5, size.width() * 0.5, Qt::AspectRatioMode(true)));
        ui->picture->setGeometry(size.width() * 0.25, size.height() * 0.04, size.width() * 0.5, size.width() * 0.5);
        ui->info->setGeometry(size.width() * 0.15, size.height() * 0.3, size.width() * 0.7, size.height() * 0.15);
        ui->pushButton->setGeometry(size.width() * 0.1, size.height() * 0.78, size.width() * 0.8, size.height() * 0.07);
        ui->pushButton_2->setGeometry(size.width() * 0.1, size.height() * 0.88, size.width() * 0.8, size.height() * 0.07);
        ui->label_2->setGeometry(size.width() * 0.15, size.height() * 0.5, size.width() * 0.7, size.height() * 0.05);
        ui->password->setGeometry(size.width() * 0.15, size.height() * 0.55, size.width() * 0.7, size.height() * 0.05);
        ui->label->setGeometry(size.width() * 0.15, size.height() * 0.4, size.width() * 0.7, size.height() * 0.05);
        ui->login->setGeometry(size.width() * 0.15, size.height() * 0.45, size.width() * 0.7, size.height() * 0.05);
    } else {
        QRect r = QWidget::frameGeometry();

        ui->info->setGeometry(r.width() * 0.15, r.height() * 0.3, r.width() * 0.7, r.height() * 0.15);
        ui->pushButton->setGeometry(r.width() * 0.1, r.height() * 0.78, r.width() * 0.8, r.height() * 0.07);
        ui->pushButton_2->setGeometry(r.width() * 0.1, r.height() * 0.88, r.width() * 0.8, r.height() * 0.07);
        ui->label_2->setGeometry(r.width() * 0.15, r.height() * 0.5, r.width() * 0.7, r.height() * 0.05);
        ui->password->setGeometry(r.width() * 0.15, r.height() * 0.55, r.width() * 0.7, r.height() * 0.05);
        ui->label->setGeometry(r.width() * 0.15, r.height() * 0.4, r.width() * 0.7, r.height() * 0.05);
        ui->login->setGeometry(r.width() * 0.15, r.height() * 0.45, r.width() * 0.7, r.height() * 0.05);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()  // кнопка авторизация
{
    Functions *user = new Functions();

    QString login = ui->login->text();
    QString password = ui->password->text();

    if (user->authorize(login, password))// Проверка логина и пароля
    {
        //mylogin = login;
        work->setPalmalive(login, user);
        this->close();
        work->show();
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

