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

class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr);
    ~MyTcpServer();
    QTcpServer * mTcpServer;
    int server_status;
    QMap<int,QTcpSocket *> SClients;
    QMap<std::string, std::string> logPass;
    QSqlDatabase db;
    QSqlQuery que;

public slots:
    void slotNewConnection();
    void slotClientDisconnected();
    void slotServerRead();
    //void slotReadClient();
private:

};
#endif // MYTCPSERVER_H







