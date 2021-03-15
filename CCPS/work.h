#ifndef WORK_H
#define WORK_H

#include <QMainWindow>

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

private:
    Ui::Work *ui;
signals:
    void signM(); // пока пусто
};



#endif // WORK_H

