#include "function.h"


void authorize(std::string message, QTcpSocket *clientSocket)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);
    QString mylogin = QString::fromStdString(login); // QString::fromStdString(message);
    qDebug() << mylogin;

    std::string password = message;
    qDebug() << QString::fromUtf8(password.c_str());
    qDebug() << clientSocket;

    if ((login == "Tim" && password == "12345") || (login == "Gri" && password == "676767") || (login == "Oleg" && password == "lox"))
    {
        QByteArray array;
        array.append(mylogin.toUtf8());
        qDebug() << array;
        clientSocket->write(array);
    }
    else
        clientSocket->write("NOPE");
}

void registration(std::string message)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);

    pos = message.find("&");
    std::string password = message.substr(0, pos);
    message.erase(0, pos + 1);

    std::string department = message;

    //return (login.size() > 3 and password.size() > 3);
}

void send_message(std::string chatName)
{
    std::string text = "", line = "";
    std::ifstream fin(chatName + "_chat.txt");
    while (getline(fin, line)) {
        text.append(line);
    }

    qDebug()<<("I'm alive");
}

void push_to_file(std::string message) // запись в файл
{
    int pos = message.find("&");
    std::string chatName = message.substr(0, pos);
    message.erase(0, pos + 1);

    std::ofstream fout(chatName + "_chat.txt");
    fout << message;
    fout.close();
    send_message(chatName);
}
