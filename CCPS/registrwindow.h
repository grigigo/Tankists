#ifndef REGISTRWINDOW_H
#define REGISTRWINDOW_H

#include <QMainWindow>
#include <QScreen>
#include "functions.h"

namespace Ui {
class RegistrWindow;
}

class RegistrWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistrWindow(QWidget *parent = nullptr);
    ~RegistrWindow();

private slots:
    void on_back_button_clicked();

    void on_sign_up_button_clicked();

private:
    Ui::RegistrWindow *ui;

signals:
    void signReg();
};

#endif // REGISTRWINDOW_H
