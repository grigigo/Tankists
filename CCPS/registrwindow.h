#ifndef REGISTRWINDOW_H
#define REGISTRWINDOW_H

#include <QMainWindow>
#include <QScreen>
#include "functions.h"

namespace Ui {
class RegistrWindow;
}

/*!
 * \brief Данный класс предназначен для регистрации пользователя
 */
class RegistrWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistrWindow(QWidget *parent = nullptr);
    ~RegistrWindow();

    Ui::RegistrWindow *ui; ///< \brief Графический интерфейс ReqistrWindow

    void on_back_button_clicked();
    void on_sign_up_button_clicked();

signals:
    void signReg();
};

#endif // REGISTRWINDOW_H
