#include "function.h"
#include "mytcpserver.h"

void authorize(std::string message, QTcpSocket *clientSocket, QMap<std::string, std::string> map)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);
    QString mylogin = QString::fromStdString(login); // QString::fromStdString(message);

    std::string password = message;


    if (map[login] == password && password != "")
    {
        clientSocket->write("authRes&YES");
    }
    else
    {
        qDebug() << "NOPE";
        clientSocket->write("authRes&NOPE");
    }
}

void registration(std::string message, QTcpSocket *clientSocket, QMap<std::string, std::string> &map)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);

    pos = message.find("&");
    std::string password = message.substr(0, pos);
    message.erase(0, pos + 1);

    map[login] = password;

    QSqlQuery que;
    QString temp;
    std::string temp2;
    que.exec("select * from users;");
    temp2 = "insert into users (login, password) values ('" + login + "', '" + password + "');";
    temp = QString::fromStdString(temp2);
    que.exec(temp);

    qDebug() << temp;

    clientSocket->write("YES");
}

void send_message(std::string chatName, std::string message, QMap<int,QTcpSocket *> SClients) // отправка файла всем
{
    QByteArray text = "new_message&";

    QMap<int,QTcpSocket *> :: iterator it = SClients.begin();

    text.append(QString::fromStdString(message).toUtf8());

    for (; it != SClients.end(); ++it)
    {
        it.value()->write(text);
        qDebug() << it.value();
    }
}

void push_to_file(std::string message, QMap<int,QTcpSocket *> SClients) // запись в файл
{
    int pos = message.find("&");
    std::string chatName = message.substr(0, pos);
    message.erase(0, pos);

    chatName += "_chat.txt";
    std::ofstream fout(chatName, std::ios::app);
    fout << message;
    fout.close();

    send_message(chatName, message, SClients);
}

void send_history(std::string chatName, QTcpSocket *clientSocket)
{
    std::string line = "";
    QString qline = "";
    QByteArray text = "chat_history&";
    chatName += "_chat.txt";
    std::ifstream fin(chatName);

    getline(fin, line);

    text.append(QString::fromStdString(line).toUtf8());
    clientSocket->write(text);

    fin.close();
}

bool calendar(std::string message)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos+1);

    pos = message.find("&");
    std::string fromDate = message.substr(0, pos);
    message.erase(0, pos+1);

    std::string toDate = message;

    QSqlQuery que;
    std::string temp;
    temp = "update users set last_holiday_end = '"+fromDate+"-"+toDate+"' where login='"+login+"';";
    que.exec(QString::fromStdString(temp));
    return true;

}

void date_request(std::string login, QTcpSocket *clientSocket)
{
    QByteArray date = "date_request&";
    QSqlQuery que;
    std::string temp;
    QString fromto,days;
    temp = "select * from users where login='"+login+"';";
    que.exec(QString::fromStdString(temp));
    while (que.next())
    {
        fromto = que.value(4).toString();
        days = que.value(5).toString();
        fromto+="&"+days;
    }

    date.append(fromto.toUtf8()); // вставить данные из бд

    clientSocket->write(date);
}

void send_note(std::string message, QTcpSocket *clientSocket)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);

    qDebug() << QString::fromStdString(message);

    std::string filename = login + "_notes.txt";
    std::ofstream fout(filename, std::ios::app);
    fout << message;
    fout.close();

    note_request(login, clientSocket);
}

void note_request(std::string message, QTcpSocket *clientSocket)
{
    std::string line = "";
    QByteArray text = "note_request&";

    std::string filename = message;

    filename += "_notes.txt";
    std::ifstream fin(filename);

    getline(fin, line);

    qDebug() << QString::fromStdString(line);

    text.append(QString::fromStdString(line).toUtf8());
    clientSocket->write(text);

    fin.close();
}
