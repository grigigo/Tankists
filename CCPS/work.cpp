#include "work.h"
#include "ui_work.h"
#include "mainwindow.h"

Work::Work(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Work)
{
    ui->setupUi(this);
}

Work::~Work()
{
    delete ui;
}

