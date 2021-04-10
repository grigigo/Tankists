#include "mytcpclient.h"

MyTcpClient::MyTcpClient(QObject *parent) : QObject(parent)
{
    client_socket = new QTcpSocket(this);
    client_socket->connectToHost("192.168.137.1", 33333);
    connect (client_socket, SIGNAL(connected()), SLOT(slot_connected()));
    connect (client_socket, SIGNAL(readyRead()), SLOT(slot_readyRead_con()));
}

/*MyTcpClient::~MyTcpClient()
{
    delete ui;
}*/

void MyTcpClient::slot_connected() {
    //client_socket->write()

    //QMessageBox Msg;
    //Msg.setText("Connected!!!");
    //Msg.exec();
}

QString MyTcpClient::slot_readyRead() {
    QByteArray array;
    QString message = "";

    while(client_socket->bytesAvailable() > 0) {
        array = client_socket->readAll();
        message += array;
    }

    QMessageBox Msg;
    Msg.setText("norm" + message);
    Msg.exec();

    return message;
}

void MyTcpClient::slot_readyRead_con() {
    QByteArray array;
    QString message = "";

    while(client_socket->bytesAvailable() > 0) {
        array = client_socket->readAll();
        message += array;
    }

    QMessageBox Msg;
    Msg.setText("con" + message);
    Msg.exec();
}


void MyTcpClient::slot_send_to_server(QString message) {
    QByteArray array;
    array.append(message.toUtf8());
    client_socket->write(array);

}

void MyTcpClient::slot_disconnected() {
    client_socket->close();
}
