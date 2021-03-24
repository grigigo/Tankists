#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <QString>
#include "mytcpclient.h"

class Functions {
public:
    Functions();
    ~Functions();

    /*bool authorize(QString login, QString password);//авторизация

    bool registration(QString login, QString password);//регистрация*/
};

bool authorize(QString login, QString password);//авторизация

bool registration(QString login, QString password);//регистрация

#endif // FUNCTIONS_H
