#include "functions.h"

/*!
 * \brief Functions::Functions - конструктор класса без параметров
 * \details - Создает объект класса MyTcpClient
 */
Functions::Functions() {
    clientAuth = new MyTcpClient();
}

/*!
 * \brief Functions::Functions - конструктор класса с параметром
 * \param client - ссылка на объект MyTcpClient, если он уже создан
 * \details - Присваивает своему полю clientAuth входящий параметр client
 */
Functions::Functions(MyTcpClient *client) {
    clientAuth = client;
}

/*!
 * \brief Functions::~Functions - деструктор класса
 * \details - Отсоединяет пользователя от сервера
 */
Functions::~Functions() {
    clientAuth->slot_disconnected();
}

/*!
 * \brief Functions::authorize - отправляет запрос для авторизации на сервер
 * \details
 * - Отправляет на сервер логин и пароль для авторизации
 * - Формат запроса: auth&<login>&<password>
 * \param login, password - введенные пользователем логин и пароль
 */
void Functions::authorize(QString login, QString password)
{
    QString request = "auth&" + login + "&" + password;
    clientAuth->slot_send_to_server(request);
}

/*!
 * \brief Functions::registration - отправляет запрос для регистрации на сервер
 * \details
 * - Отправляет на сервер логин и пароль для регистрации
 * - Формат запроса: req&<login>&<password>
 * \param login, password - введенные пользователем логин и пароль
 * \return **true**, если регистрация была успешна проведена
 * \return **false**, если регистрация была провалена
 */
bool Functions::registration(QString login, QString password)
{
    QString request = "reg&" + login + "&" + password;
    clientAuth->slot_send_to_server(request);

    return true;
}

/*!
 * \brief Functions::send_message - отправляет сообщение на сервер
 * \details
 * - Отправляет на сервер сообщение
 * - Формат сообщения: message&<message>
 * \param message - состоит из depart&<логин>&<сообщение>&
 * \details - Общий формат: message&depart&<логин>&<сообщение>&
 */
void Functions::send_message(QString message)
{
    QString request = "message&" + message;
    clientAuth->slot_send_to_server(request);
}

/*!
 * \brief Functions::chat_history_request - отправляет на сервер запрос истории чата
 * \details
 * - Отправляет на сервер запрос для получения истории чата
 * - Формат запроса: history&<chatName>
 * \param chatName - название чата, историю которого просит пользователь
 */
void Functions::chat_history_request(QString chatName)
{
    QString request = "history&" + chatName;
    clientAuth->slot_send_to_server(request);
}

/*!
 * \brief Functions::calendar - отправляет запрос на сервер для планирования отпуска
 * \details
 * - Отправляет запрос на сервер
 * - Формат запроса: calendar&<login>&<fromdate>&<todate>
 * \param login - логин пользователя
 * \param fromdate - дата начала отпуска
 * \param todate - дата конца отпуска
 */
void Functions::calendar(QString login, std::string fromdate, std::string todate)
{
    QString request = "calendar&" + login + "&" + QString::fromStdString(fromdate) + "&" + QString::fromStdString(todate);
    clientAuth->slot_send_to_server(request);
}

/*!
 * \brief Functions::date_request - отправляет запрос на сервер для получения запланированных отпусков
 * \details
 * - Отправляет запрос на сервер для получения запланированных отпусков
 * - Формат запроса: date_request&<login>
 * \param login - логин пользователя
 */
void Functions::date_request(QString login)
{
    QString request = "date_request&" + login;
    clientAuth->slot_send_to_server(request);
}

/*!
 * \brief Functions::disconnect - отправляет запрос на сервер для отключения пользователя от сервера
 * \details
 * - Отправляет запрос на сервер для отключения пользователя от сервера
 * - Формат запроса: disconnect&
 */
void Functions::disconnect()
{
    QString request = "disconnect&";
    clientAuth->slot_disconnected();
}
