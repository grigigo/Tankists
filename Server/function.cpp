#include "function.h"


bool authorize(std::string message)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);

    pos = message.find("&");
    std::string password = message;

    return ((login=="Tim" and password=="12345") or (login=="Gri" and password=="676767") or (login=="Oleg" and password=="lox"));
}

bool registration(std::string message)
{
    int pos = message.find("&");
    std::string login = message.substr(0, pos);
    message.erase(0, pos + 1);

    pos = message.find("&");
    std::string password = message.substr(0, pos);
    message.erase(0, pos + 1);

    pos = message.find("&");
    std::string department = message;

    return (login.size()>3 and password.size()>3);
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
