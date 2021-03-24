#include "function.h"


bool authorize(QString login, QString password)
{
    return ((login=="Tim" and password=="12345") or (login=="Gri" and password=="676767") or (login=="Oleg" and password=="lox"));
}

bool registration(QString login, QString password)
{
    return (login.size()>3 and password.size()>3);
}
