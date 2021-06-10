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

/*!
 * \brief Класс, в котором происходит основная работа приложения
 * \details
 * - Чат
 * - Заметки
 * - Планирование отпуска
 */
class Work : public QMainWindow
{
    Q_OBJECT

public:
    explicit Work(QWidget *parent = nullptr);
    ~Work();

    Ui::Work *ui; ///< \brief Графический интерфейс Work
    QString mylogin; ///< \brief Логин пользователя
    Functions *myuser; ///< \brief Объект класса Functions
    MyTcpClient *mytcpclient; ///< \brief Объект класса MyTcpClient
    QDate fromdate; ///< \brief Запланировать от даты (QDate)
    QDate todate; ///< \brief Запланировать до даты (QDate)
    std::string todate_s; ///< \brief Запланировать до даты (std::string)
    std::string fromdate_s; ///< \brief Запланировать от даты (std::string)
    int days; ///< \brief Кол-во дней, доступных для отпуска

public slots:
    void setPalmalive(QString login, Functions *user);
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

signals:
    void signMy(); ///< \brief Сигнал для передачи управления классу MainWindow
};



#endif // WORK_H

