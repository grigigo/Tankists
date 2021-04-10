#include "function.h"


void authorize(std::string message, QTcpSocket *clientSocket, QMap<std::string, std::string> map)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);
    QString mylogin = QString::fromStdString(login); // QString::fromStdString(message);

    std::string password = message;


    if (map[login] == password)// and password!="")    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    {
        clientSocket->write("YES");
    }
    else
    {
        qDebug() << "NOPE";
        clientSocket->write("NOPE");
    }
}

void registration(std::string message, QTcpSocket *clientSocket, QMap<std::string, std::string> map)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);

    pos = message.find("&");
    std::string password = message.substr(0, pos);
    message.erase(0, pos + 1);

    std::string department = message;

    map[login] = password;

    QString mypass = QString::fromStdString(map[login]);

    qDebug() << mypass;

    clientSocket->write("YES");
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
