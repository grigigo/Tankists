#include "work.h"
#include "ui_work.h"
#include "mainwindow.h"
#include <QScreen>

Work::Work(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Work)
{
    ui->setupUi(this);

    QScreen* screen = QApplication::screens().at(0);
    QSize size = screen->availableSize();

    ui->label->setWordWrap(true);
    ui->label->setGeometry(size.width() * 0.1, size.height() * 0.3, size.width() * 0.8, size.height() * 0.5);
    ui->back_button->setGeometry(size.width() * 0.1, size.height() * 0.9, size.width() * 0.8, size.height() * 0.07);
}

Work::~Work()
{
    delete ui;
}

void Work::on_back_button_clicked()
{
    hide();
    emit signM();
}
