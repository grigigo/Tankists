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
    Msg.setText("first auth " + answer);
    Msg.exec();

    answer = clientAuth->slot_readyRead();

    //QMessageBox Msg;
    Msg.setText("second auth " + answer);
    Msg.exec();

    if (answer == "auth&YES")// поменять на ес или ноу
        return true;
    else
        return false;
}



bool Functions::registration(QString login, QString password)
{
    QString request = "reg&" + login + "&" + password;
    clientAuth->slot_send_to_server(request);

    QString answer = clientAuth->slot_readyRead();

    /*QMessageBox Msg;
    Msg.setText("first zero" + answer);
    Msg.exec();*/

    answer = clientAuth->slot_readyRead();

    /*QMessageBox Msg;
    Msg.setText("reg " + answer);
    Msg.exec();*/

    if (answer == "YES")
        return true;
    else
        return false;
}

void Functions::send_message(QString message)
{
    QString request = "message&" + message;
    clientAuth->slot_send_to_server(request);
}

QString Functions::chat_history_request(QString chatName)
{
    QString request = "history&" + chatName;
    clientAuth->slot_send_to_server(request);

    QString answer = clientAuth->slot_readyRead();
    QMessageBox Msg;
    Msg.setText("first " + answer);
    Msg.exec();

    answer = clientAuth->slot_readyRead();
    Msg.setText("second " + answer);
    Msg.exec();

    /*answer = clientAuth->slot_readyRead();
    Msg.setText("third " + answer);
    Msg.exec();

    answer = clientAuth->slot_readyRead();
    Msg.setText("fourth " + answer);
    Msg.exec();*/

    return answer;
}
