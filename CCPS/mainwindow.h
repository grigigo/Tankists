#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPixmap>
#include <QScreen>
#include <QApplication>
#include <QScreenOrientationChangeEvent>
#include "mytcpclient.h"
#include "functions.h"
#include "work.h"
#include "registrwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/*!
 * \brief Данный класс - начальный класс. Здесь происходит авторизация и переход к регистрации
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void onLoginYes();
    void onLoginNope();

public:
    Ui::MainWindow *ui; ///< \brief Графический интерфейс MainWindow
    Work *work; ///< \brief Объект класса Work
    RegistrWindow *registr; ///< \brief Объект класса RegistrWindow
    MyTcpClient *mytcpclient; ///< \brief Объект класса MaTcpClient
    Functions *user; ///< \brief Объект класса Functions
};
#endif // MAINWINDOW_H
