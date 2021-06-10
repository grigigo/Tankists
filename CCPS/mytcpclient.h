#ifndef MYTCPCLIENT_H
#define MYTCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QByteArray>

using namespace std;

/*!
 * \brief Класс для поддержки соединения с сервером и обмена данными с ним
 */
class MyTcpClient : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpClient(QObject *parent = nullptr);
    //~MyTcpClient();

    QTcpSocket *client_socket; ///< \brief Сокет пользователя для связи с сервером

signals:
    void signAuthYes(); ///< \brief Сигнал подтверждения авторизации
    void signAuthNope(); ///< \brief Сигнал отклонения авторизации
    void writeTextHistory(QString history); ///< \brief Сигнал записи истории чата
    void dates(QString date); ///< \brief Сигнал для отпусков
    void notes(QString note); ///< \brief Сигнал для заметок

public slots:
    void slot_connected();
    void slot_readyRead();
    void slot_send_to_server(QString message);
    void slot_disconnected();
};

#endif
