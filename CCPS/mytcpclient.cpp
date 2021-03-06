#include "mytcpclient.h"

MyTcpClient::MyTcpClient(QObject *parent) : QObject(parent)
{
    client_socket = new QTcpSocket(this);
    client_socket->connectToHost("127.0.0.1", 33333);
   // client_socket->connectToHost("192.168.137.1", 33333);
    connect (client_socket, SIGNAL(connected()), SLOT(slot_connected()));
    connect (client_socket, SIGNAL(readyRead()), SLOT(slot_readyRead()));
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

void MyTcpClient::slot_readyRead() {
    QByteArray array;
    QString message = "";

    while(client_socket->bytesAvailable() > 0) {
        array = client_socket->readAll();
        message += array;
    }

    std::string code = "";
    std::string text = message.toStdString();

    int pos = text.find("&");

    if (pos == -1) return;

    code = text.substr(0, pos);
    text.erase(0, pos + 1);

    if (code == "authRes")
    {
        pos = text.find("&");
        code = text.substr(0,pos);
        if (code == "YES")
            emit signAuthYes();
        else
            emit signAuthNope();
    }
    else if (code == "chat_history")
    {
        message = QString::fromStdString(text);
        emit writeTextHistory(message);
    }
    else if (code == "new_message")
    {
        message = QString::fromStdString(text);
        emit writeTextHistory(message);
    }
    else if (code == "date_request")
    {
        message = QString::fromStdString(text);
        emit dates(message);
    }
    else if (code == "note_request")
    {
        message = QString::fromStdString(text);
        emit notes(message);
    }

    //return message;
}


void MyTcpClient::slot_send_to_server(QString message) {
    QByteArray array;
    array.append(message.toUtf8());
    client_socket->write(array);

}

void MyTcpClient::slot_disconnected() {
    client_socket->close();
}
