#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <QString>
#include "mytcpclient.h"

/*!
 * \brief Данный класс предназначен для оформления и отправки запросов на сервер
*/
class Functions {
public:

    Functions(MyTcpClient *client);
    Functions();
    ~Functions();

    MyTcpClient *clientAuth; ///< \brief Объект класса MyTcpClient \details Используется для отправки запросов на сервер

    void authorize(QString login, QString password);
    void send_message(QString message);
    bool registration(QString login, QString password);
    void chat_history_request(QString chatName);
    void calendar(QString message,std::string fromdate,std::string todate);
    void date_request(QString login);
    void disconnect();

};
#endif // FUNCTIONS_H
