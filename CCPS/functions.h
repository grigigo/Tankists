#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <QString>
#include "mytcpclient.h"

class Functions {
private:


public:
    Functions(MyTcpClient *client);
    Functions();
    ~Functions();

    MyTcpClient *clientAuth;

    void authorize(QString login, QString password);//авторизация

    void send_message(QString message);//Отправка сообщения

    bool registration(QString login, QString password);//регистрация*/

    void chat_history_request(QString chatName);
};


#endif // FUNCTIONS_H
