#include "functions.h"

bool authorize(std::string login, std::string password)
{
    return ((login=="Tim" and password=="12345") or (login=="Gri" and password=="676767"));
}
bool registration(std::string login, std::string password)
{
return (login.size()>3 and password.size()>3);
}
