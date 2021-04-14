#ifndef FUNCTION_H
#define FUNCTION_H

#include <QString>
#include <fstream>
#include <QTcpSocket>
#include <QDebug>
#include <QByteArray>

void authorize(std::string message, QTcpSocket *clientSocket, QMap<std::string, std::string> map);//авторизация

void registration(std::string message, QTcpSocket *clientSocket, QMap<std::string, std::string> map);//регистрация

void send_message(std::string message, QMap<int,QTcpSocket *> SClients, QTcpSocket *clientSocket); // отправка сообщения клиенту

void push_to_file(std::string message, QMap<int,QTcpSocket *> SClients, QTcpSocket *clientSocket); // получение сообщения

void send_history(std::string message, QTcpSocket *clientSocket);

#endif // FUNCTION_H
//  select login from users join users_chats on users_chats.id_user = users.id_user where id_chat = 1;
