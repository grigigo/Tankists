#include "mytcpclient.h"

/*!
 * \brief MyTcpClient::MyTcpClient - конструктор класса
 * \details
 * - Создает сокет пользовтелю
 * - Настраивает IP-адрес сервера
 * - Подключается к серверу на отправку и принятие данных
 * \param parent - наследует QObject
 */
MyTcpClient::MyTcpClient(QObject *parent) : QObject(parent)
{
    client_socket = new QTcpSocket(this);
    //client_socket->connectToHost("127.0.0.1", 33333);
    client_socket->connectToHost("192.168.3.12", 33333);
    //client_socket->connectToHost("192.168.137.1", 33333);
    connect (client_socket, SIGNAL(connected()), SLOT(slot_connected()));
    connect (client_socket, SIGNAL(readyRead()), SLOT(slot_readyRead()));
}

/*!
 * \brief MyTcpClient::slot_connected - пустышка
 */
void MyTcpClient::slot_connected() {
    //client_socket->write()
    //QMessageBox Msg;
    //Msg.setText("Connected!!!");
    //Msg.exec();
}

/*!
 * \brief MyTcpClient::slot_readyRead - слот чтения данных с сервера
 * \details
 * - Считывает сообщения, приходящие с сервера
 * - Достает код из сообщения
 * - Вызывает сигнал, соответствующий этому коду
 */
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
}

/*!
 * \brief MyTcpClient::slot_send_to_server - слот отправки сообщения на сервер
 * \details - Принимает на вход сообщение, пакует его в нужный тип данных и отправляет на сервер
 * \param message - сообщение, которое нужно отправить
 */
void MyTcpClient::slot_send_to_server(QString message) {
    QByteArray array;
    array.append(message.toUtf8());
    client_socket->write(array);

}

/*!
 * \brief MyTcpClient::slot_disconnected - слот отсоединения пользователя от сервера
 */
void MyTcpClient::slot_disconnected() {
    client_socket->close();
}
