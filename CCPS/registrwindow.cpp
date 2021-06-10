#include "registrwindow.h"
#include "ui_registrwindow.h"

/*!
 * \brief RegistrWindow::RegistrWindow - конструктор класса
 * \details - Задает параметры окна и его элементов
 * \param parent - наследует QWidget
 */
RegistrWindow::RegistrWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegistrWindow)
{
    ui->setupUi(this);

    QScreen* screen = QApplication::screens().at(0);
    QSize size = screen->availableSize();

    ui->sign_up_button->setGeometry(size.width() * 0.1, size.height() * 0.78, size.width() * 0.8, size.height() * 0.07);
    ui->back_button->setGeometry(size.width() * 0.1, size.height() * 0.88, size.width() * 0.8, size.height() * 0.07);

    ui->login_1->setGeometry(size.width() * 0.15, size.height() * 0.3, size.width() * 0.7, size.height() * 0.05);
    ui->login_edit->setGeometry(size.width() * 0.15, size.height() * 0.35, size.width() * 0.7, size.height() * 0.05);

    ui->password_1->setGeometry(size.width() * 0.15, size.height() * 0.4, size.width() * 0.7, size.height() * 0.05);
    ui->password_edit->setGeometry(size.width() * 0.15, size.height() * 0.45, size.width() * 0.7, size.height() * 0.05);
}

/*!
 * \brief RegistrWindow::~RegistrWindow - деструктор класса
 */
RegistrWindow::~RegistrWindow()
{
    delete ui;
}

/*!
 * \brief RegistrWindow::on_back_button_clicked - кнопка возврата
 * \details - Возвращает управление классу MainWindow, запуская сигнал ReqistrWindow::signReg
 */
void RegistrWindow::on_back_button_clicked()
{
    this->close();
    emit signReg();
}

/*!
 * \brief RegistrWindow::on_sign_up_button_clicked - кнопка регистрации
 * \details
 * - Создает и инициализирует объект класса Functions
 * - Считывает login и password и передает их как параметры в функцию Functions::registration
 * - Вызывает функцию RegistrWindow::on_back_button_clicked
 */
void RegistrWindow::on_sign_up_button_clicked()
{
    Functions *user = new Functions();

    QString login = ui->login_edit->text();
    QString password = ui->password_edit->text();

    if (user->registration(login, password))
    {
        this->on_back_button_clicked();
    }
    else
    {
        this->on_back_button_clicked();
    }
}
