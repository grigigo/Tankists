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

    return true;
}

bool Functions::registration(QString login, QString password)
{
return (login.size()>3 and password.size()>3);
}

bool send_message(QString message)
{
    MyTcpClient *clientAuth = new MyTcpClient();
    QString request = "message&" + message;//добавить логин
    clientAuth->slot_send_to_server(request);
    return true;
}
