#ifndef FUNCTION_H
#define FUNCTION_H

#include <QString>
#include <fstream>
#include <QTcpSocket>
#include <QDebug>
#include <QByteArray>

void authorize(std::string message, QTcpSocket *clientSocket);//авторизация

void registration(std::string message);//регистрация

void send_message(std::string message); // отправка сообщения клиенту

void push_to_file(std::string message); // получение сообщения

#endif // FUNCTION_H
