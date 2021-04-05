#include "functions.h"

Functions::Functions() {
    clientAuth = new MyTcpClient();
}

Functions::~Functions() {
    clientAuth->slot_disconnected();
}

bool Functions::authorize(QString login, QString password)
{
    QString request = "auth&" + login + "&" + password;
    clientAuth->slot_send_to_server(request);

    QString answer = clientAuth->slot_readyRead();

    QMessageBox Msg;
    Msg.setText(answer);
    Msg.exec();

    if (answer == login)
        return true;
    else
        return false;
}

bool Functions::registration(QString login, QString password)
{
return (login.size() > 3 and password.size() > 3);
}

bool send_message(QString message)
{
    MyTcpClient *clientAuth = new MyTcpClient();
    QString request = "message&" + message;//добавить логин
    clientAuth->slot_send_to_server(request);
    return true;
}
