#ifndef MYTCPCLIENT_H
#define MYTCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QMessageBox>
#include <QByteArray>

using namespace std;

class MyTcpClient : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpClient(QObject *parent = nullptr);
    //~MyTcpClient();

private:
    QTcpSocket *client_socket;

public slots:
    void slot_connected();
    QString slot_readyRead();
    void slot_send_to_server(QString message); // отправляем msg=login+pass на сервер
    void slot_disconnected();
};

#endif // MYTCPCLIENT_H
