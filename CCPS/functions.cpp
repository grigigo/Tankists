#include "functions.h"

Functions::Functions() {
    clientAuth = new MyTcpClient();
}

Functions::Functions(MyTcpClient *client) {
    clientAuth = client;
}

Functions::~Functions() {
    clientAuth->slot_disconnected();
}

void Functions::authorize(QString login, QString password)
{
    QString request = "auth&" + login + "&" + password;
    clientAuth->slot_send_to_server(request);
}



bool Functions::registration(QString login, QString password)
{
    QString request = "reg&" + login + "&" + password;
    clientAuth->slot_send_to_server(request);

    return true;
}

void Functions::send_message(QString message)
{
    QString request = "message&" + message;
    clientAuth->slot_send_to_server(request);
}

void Functions::chat_history_request(QString chatName)
{
    QString request = "history&" + chatName;
    clientAuth->slot_send_to_server(request);
}

void Functions::calendar(QString login,std::string fromdate,std::string todate)
{
    QString request = "calendar&"+ login +"&" + QString::fromStdString(fromdate)+"&"+QString::fromStdString(todate);
    clientAuth->slot_send_to_server(request);
}
