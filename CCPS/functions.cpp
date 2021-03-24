#include "functions.h"



bool authorize(QString login, QString password)
{
    MyTcpClient *clientAuth = new MyTcpClient(nullptr);
    QString message = "auth&" + login + "&" + password;
    clientAuth->slot_send_to_server(message);

    return true;
}

bool registration(QString login, QString password)
{
return (login.size()>3 and password.size()>3);
}
