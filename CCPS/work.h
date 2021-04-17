#ifndef WORK_H
#define WORK_H

#include <QMainWindow>
#include <QScrollBar>
#include <fstream>
#include <QScreen>
#include "functions.h"

namespace Ui {
class Work;
}

class Work : public QMainWindow
{
    Q_OBJECT

public:
    explicit Work(QWidget *parent = nullptr);
    ~Work();
    QString mylogin;
    Functions *myuser;
    MyTcpClient *mytcpclient;

public slots:
    void setPalmalive(QString login, Functions *user);

private slots:

    void on_back_button_clicked();

    void on_chat_button_clicked();

    void on_pushButton_clicked();

    void on_depart_chat_button_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void writeToQTextBrowser(QString history);

private:
    Ui::Work *ui;

signals:
    void signM();
};



#endif // WORK_H

