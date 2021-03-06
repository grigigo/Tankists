#include "mytcpserver.h"
#include <QDebug>
#include <QCoreApplication>

MyTcpServer::~MyTcpServer()
{
    foreach (int i, SClients.keys()){
        QTextStream os(SClients[i]);
        SClients[i]->close();
        SClients.remove(i);
    }
    server_status = 0;
    mTcpServer->close();
    db.close();
}
MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent){
    mTcpServer = new QTcpServer(this);
    connect(mTcpServer, &QTcpServer::newConnection, this, &MyTcpServer::slotNewConnection);

    if(!mTcpServer->listen(QHostAddress::Any, 33333)){
        qDebug() << "server is not started";
    } else {
        server_status = 1;
        qDebug() << "server is started";
    }

    logPass[""] = "";

    // лучший код на свете

    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("qtccps");
    db.setUserName("postgres");
    db.setPassword("3803038030");
    //db.setPassword("676767");
    db.open();
    QSqlQuery que;
    QString temp,temp2;
   que.exec("select * from users");
    while (que.next())
    {
        temp = que.value(1).toString();
        temp2 = que.value(2).toString();
        logPass[temp.toLocal8Bit().constData()] = temp2.toLocal8Bit().constData();
    }

}

void MyTcpServer::slotNewConnection(){
    if(server_status == 1){
        QTcpSocket* clientSocket = mTcpServer->nextPendingConnection();
        int idusersocs = (int)clientSocket->socketDescriptor();
        SClients[idusersocs] = clientSocket;
           SClients[idusersocs]->write("Hello!\n");
           connect(SClients[idusersocs],&QTcpSocket::readyRead,this,&MyTcpServer::slotServerRead);
           connect(SClients[idusersocs],&QTcpSocket::disconnected,this,&MyTcpServer::slotClientDisconnected);
    }
}

void MyTcpServer::slotServerRead(){
    QTcpSocket *clientSocket = (QTcpSocket*)sender();
    //int id =(int)clientSocket->socketDescriptor();
    while(clientSocket->bytesAvailable()>0)
    {
        QByteArray array = clientSocket->readAll();
        std::string code = "";
        std::string message;
        message = array.toStdString();
        qDebug() << QString::fromStdString(message);
        qDebug() << clientSocket;
        //
        int pos = message.find("&");
        code = message.substr(0,pos);
        message.erase(0,pos+1);

        if (code == "message")
        {
            push_to_file(message, SClients);
        }
        else if (code == "auth")
        {
            authorize(message, clientSocket, logPass);
        }
        else if (code == "reg")
        {
            registration(message, clientSocket, logPass);
        }
        else if (code == "history")
        {
            send_history(message, clientSocket);
        }
        else if (code == "calendar")
        {
            calendar(message);
        }
        else if (code == "date_request")
        {
            date_request(message, clientSocket);
        }
        else if (code == "send_note")
        {
            send_note(message, clientSocket);
        }
        else if (code == "note_request")
        {
            note_request(message, clientSocket);
        }
        else if (code == "disconnect")
        {
            slotClientDisconnected();
        }
    }

}

void MyTcpServer::slotClientDisconnected(){
    QTcpSocket *clientSocket = (QTcpSocket*)sender();
    int id =(int)clientSocket->socketDescriptor();
    clientSocket->close();
    SClients.remove(id);
    //server_status--;
    qDebug()<<QString::fromUtf8("Client is disconnected /n");
}
