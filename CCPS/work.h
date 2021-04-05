#ifndef WORK_H
#define WORK_H

#include <QMainWindow>
#include <QScrollBar>
namespace Ui {
class Work;
}

class Work : public QMainWindow
{
    Q_OBJECT

public:
    explicit Work(QWidget *parent = nullptr);
    ~Work();

private slots:

    void on_back_button_clicked();

    void on_chat_button_clicked();

    void on_pushButton_clicked();

    void on_depart_chat_button_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::Work *ui;
    std::string mylogin;

signals:
    void signM();
};



#endif // WORK_H

