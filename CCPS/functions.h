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

    bool registration(QString login, QString password);//регистрация*/

    //bool send_message(QString message);//Отправка сообщения
};

bool send_message(QString message);//Отправка сообщения

#endif // FUNCTIONS_H
