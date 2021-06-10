#include "mytcpserver.h"
#include <QDebug>
#include <QCoreApplication>

/*!
 * \brief MyTcpServer::~MyTcpServer - деструктор класса
 */
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

/*!
 * \brief MyTcpServer::MyTcpServer - конструктор класса
 * \details
 * - Запускает сервер
 * - Открывает базу данных и записывает данные в logPass
 * \param parent - наследует QObject
 */
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

    db = QSqlDatabase::addDatabase("QPSQL");
    db.setPort(5432);
    db.setHostName("localhost");
    db.setDatabaseName("qtccps");
    db.setUserName("postgres");
    //db.setPassword("3803038030");
    db.setPassword("676767");
    db.open();
    QSqlQuery que;
    QString temp,temp2;
    qDebug() << que.exec("select * from users");
    while (que.next())
    {
        temp = que.value(1).toString();
        temp2 = que.value(2).toString();
        logPass[temp.toLocal8Bit().constData()] = temp2.toLocal8Bit().constData();
    }

}

/*!
 * \brief MyTcpServer::slotNewConnection - подключение нового пользователя
 * \details
 * - Устанавливает соединение с новым пользователем
 * - Записывает данные о пользователе в соответствующие переменные
 */
void MyTcpServer::slotNewConnection(){
    if(server_status == 1){
        QTcpSocket* clientSocket = mTcpServer->nextPendingConnection();
        int idusersocs = (int)clientSocket->socketDescriptor();
        SClients[idusersocs] = clientSocket;
           SClients[idusersocs]->write("Hello!\n");
           connect(SClients[idusersocs], &QTcpSocket::readyRead, this, &MyTcpServer::slotServerRead);
           connect(SClients[idusersocs], &QTcpSocket::disconnected, this, &MyTcpServer::slotClientDisconnected);
    }
}

/*!
 * \brief MyTcpServer::slotServerRead - считывает данные, отправленные с сервера
 * \details
 * - Считывает запрос
 * - Выделяет из запроса код
 * - Выполняет функцию, соответствующую этому коду
 */
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

        int pos = message.find("&");
        code = message.substr(0,pos);
        message.erase(0,pos+1);

        //! \brief ***Функциии обработки запросов:***

        if (code == "message")
        {
            /*!
             * - **push_to_file** - добавляет сообщение в файл с историей сообщений чата
             * - **send_message** - отправляет всем пользователям историю чата
             */
            push_to_file(message, SClients);
        }
        else if (code == "auth")
        {
            /*!
             * - **authorize** - сравнивает пару login + password и отправляет ответ клиенту
             */
            authorize(message, clientSocket, logPass);
        }
        else if (code == "reg")
        {
            /*!
             * - **registration** - сохраняет пару login + password в базу данных
             */
            registration(message, clientSocket, logPass);
        }
        else if (code == "history")
        {
            /*!
             * - **send_history** - отправляет историю сообщений чата пользовтелю
             */
            send_history(message, clientSocket);
        }
        else if (code == "calendar")
        {
            /*!
             * - **calendar** - записывает даты отпуска пользователя в базу данных
             */
            calendar(message);
        }
        else if (code == "date_request")
        {
            /*!
             * - **date_request** - отправляет пользователю даты отпуска и кол-во оставшихся дней
             */
            date_request(message, clientSocket);
        }
        else if (code == "send_note")
        {
            /*!
             * - **send_note** - сохраняет заметку пользователя
             */
            send_note(message, clientSocket);
        }
        else if (code == "note_request")
        {
            /*!
             * - **note_request** - отправляет заметки пользователю
             */
            note_request(message, clientSocket);
        }
        else if (code == "disconnect")
        {
            slotClientDisconnected();
        }
    }

}

/*!
 * \brief MyTcpServer::slotClientDisconnected - отсоединение пользователя
 */
void MyTcpServer::slotClientDisconnected(){
    QTcpSocket *clientSocket = (QTcpSocket*)sender();
    int id =(int)clientSocket->socketDescriptor();

    clientSocket->close();
    SClients.remove(id);
    //server_status--;

    qDebug()<<QString::fromUtf8("Client is disconnected /n");
}
