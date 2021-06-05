#ifndef WORK_H
#define WORK_H

#include <QMainWindow>
#include <QScrollBar>
#include <fstream>
#include <QScreen>
#include "functions.h"
#include <QFile>
#include <QDate>
#include <QDebug>

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
    QFile file;
    QDate fromdate;
    QDate todate;
    std::string todate_s;
    std::string fromdate_s;
    int days;

public slots:
    void setPalmalive(QString login, Functions *user);

private slots:

    void on_back_button_clicked();

    void on_chat_button_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void writeToQTextBrowser(QString history);

    void on_note_button_clicked();

    void on_holiday_button_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_holiday_button_2_clicked();

    void on_holiday_button_3_clicked();

    void on_holiday_button_4_clicked();

    void on_pushButton_7_clicked();

    void on_holiday_button_5_clicked();

    void fromToDates(QString message);

    void writeNote(QString note);

private:
    Ui::Work *ui;

signals:
    void signMy();
};



#endif // WORK_H

