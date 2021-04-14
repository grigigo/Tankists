#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <QString>
#include "mytcpclient.h"

class Functions {
private:
    MyTcpClient *clientAuth;

public:
    Functions();
    ~Functions();

    bool authorize(QString login, QString password);//авторизация

    void send_message(QString message);//Отправка сообщения

    bool registration(QString login, QString password);//регистрация*/

    QString chat_history_request(QString chatName);
};


#endif // FUNCTIONS_H
