#include "function.h"


void authorize(std::string message, QTcpSocket *clientSocket, QMap<std::string, std::string> map)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);
    QString mylogin = QString::fromStdString(login); // QString::fromStdString(message);

    std::string password = message;


    if (map[login] == password || password == "")
    {
        clientSocket->write("auth&YES");
    }
    else
    {
        qDebug() << "NOPE";
        clientSocket->write("auth&NOPE");
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

void send_message(std::string chatName, QMap<int,QTcpSocket *> SClients, QTcpSocket *clientSocket) // отправка файла всем
{
    std::string line = "";
    QString qline = "";
    QByteArray text = "";
    chatName += "_chat.txt";
    std::ifstream fin(chatName);

    QMap<int,QTcpSocket *> :: iterator it = SClients.begin();

    while (getline(fin, line)) {
        QString qline = QString::fromStdString(line);
        text.append(qline.toUtf8());
    }

    for (; it != SClients.end(); ++it)
    {
        if (it.value() != clientSocket)
            it.value()->write(text);
        qDebug() << it.value();
    }

    fin.close();
}

void push_to_file(std::string message, QMap<int,QTcpSocket *> SClients, QTcpSocket *clientSocket) // запись в файл
{
    int pos = message.find("&");
    std::string chatName = message.substr(0, pos);
    message.erase(0, pos + 1);

    pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);

    chatName += "_chat.txt";
    std::ofstream fout(chatName, std::ios::app);
    fout << "&" << login << "&" << message;
    fout.close();

    send_message(chatName, SClients, clientSocket);
}

void send_history(std::string chatName, QTcpSocket *clientSocket)
{
    std::string line = "";
    QString qline = "";
    QByteArray text = "";
    chatName += "_chat.txt";
    std::ifstream fin(chatName);

    getline(fin, line);
    /*while (getline(fin, line)) {
        qDebug() << QString::fromStdString(line);
        qline = QString::fromStdString(line);
        text.append(qline.toUtf8());
    }*/
    text.append(QString::fromStdString(line).toUtf8());
    clientSocket->write(text);
    clientSocket->write(text);

    fin.close();
}
