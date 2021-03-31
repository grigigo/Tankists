#ifndef FUNCTION_H
#define FUNCTION_H

#include <QString>
#include <fstream>
#include <QDebug>

bool authorize(std::string message);//авторизация

bool registration(std::string message);//регистрация

void send_message(std::string message); // отправка сообщения клиенту

void push_to_file(std::string message); // получение сообщения

#endif // FUNCTION_H
