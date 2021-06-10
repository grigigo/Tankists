#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QtNetwork>
#include <QByteArray>
#include <QDebug>
#include <map>
#include "function.h"
#include <QDebug>
#include <QSqlRecord>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlField>

/*!
 * \brief Класс сервера. Здесь обрабатываются запросы, отправленные с клиента
 */
class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr);
    ~MyTcpServer();

    QTcpServer *mTcpServer; ///< \brief Сервер
    int server_status; ///< \brief Статус сервера
    QMap<int,QTcpSocket *> SClients; ///< \brief Ассоциативный массив клиентов(id + socket)
    QMap<std::string, std::string> logPass; ///< \brief Ассоциативный массив login + password
    QSqlDatabase db; ///< \brief База данных
    QSqlQuery que; ///< \brief Обращение к базе данных

public slots:
    void slotNewConnection();
    void slotClientDisconnected();
    void slotServerRead();
    //void slotReadClient();
};
#endif // MYTCPSERVER_H







