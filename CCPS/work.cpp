#include "work.h"
#include "ui_work.h"
#include "mainwindow.h"

Work::Work(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Work)
{
    ui->setupUi(this);

    QScreen* screen = QApplication::screens().at(0);
    QSize size = screen->availableSize();


    ui->frame->setGeometry(0,0, size.width(), size.height());
    ui->frame_2->setGeometry(0,0, size.width(), size.height());
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(false);
    ui->back_button->setGeometry(size.width() * 0.1, size.height() * 0.9, size.width() * 0.8, size.height() * 0.07);
    ui->chat_button->setGeometry(size.width() * 0.1, size.height() * 0.7, size.width() * 0.8, size.height() * 0.07);
    ui->pushButton->setGeometry(size.width() * 0, size.height() * 0, size.height() * 0.1, size.height() * 0.1);
    ui->depart_chat_button->setGeometry(size.width() * 0.1, size.height() * 0.15, size.width() * 0.8, size.height() * 0.07);
    ui->pushButton_2->setGeometry(size.width() * 0, size.height() * 0, size.height() * 0.1, size.height() * 0.1);
    ui->textBrowser->setGeometry(size.width() * 0, size.height() * 0.15, size.width() * 1, size.height() * 0.7);
    ui->pushButton_3->setGeometry(size.width() * 0.78, size.height() * 0.9, size.width() * 0.17, size.height() * 0.07);
    ui->textEdit->setGeometry(size.width() * 0.05, size.height() * 0.9, size.width() * 0.7, size.height() * 0.07);

 // QScrollBar *sb = ui->textBrowser->verticalScrollBar();
  // sb->setValue(100);

   ui->textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

  // int height = ui->textBrowser->document()->size().height();
   //ui->textBrowser->setFixedHeight(height);
   //updateGeometry();

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

void Work::on_chat_button_clicked()
{
    ui->back_button->setVisible(false);
    ui->chat_button->setVisible(false);

    ui->frame->setVisible(true);
}

void Work::on_pushButton_clicked()
{
    ui->frame->setVisible(false);
    ui->back_button->setVisible(true);
    ui->chat_button->setVisible(true);
}

void Work::on_depart_chat_button_clicked()
{
    ui->frame->setVisible(false);

    ui->frame_2->setVisible(true);

    QString text = myuser->chat_history_request("depart");

    ui->textBrowser->setText(text);
}

void Work::on_pushButton_2_clicked()
{
    ui->frame_2 ->setVisible(false);

    ui->frame->setVisible(true);
}

void Work::on_pushButton_3_clicked()
{
    QString message = ui->textEdit->text();

    ui->textEdit->setText("");
    myuser->send_message("depart&" + mylogin + "&" + message); // Не забыть поменять название чата

    QTextDocument *doc = ui->textBrowser->document();
    QString text = doc->toHtml();

    /*QMessageBox Msg;
    Msg.setText(text);
    Msg.exec();*/

    ui->textBrowser->setText(text + "<h6 align = \"right\">" + mylogin + "</h6>" + "<p align=\"right\">" + message + "</p>");
}

void Work::setPalmalive(QString login, Functions *user)
{
    mylogin = login;
    myuser = user;
    //emit signM();
}