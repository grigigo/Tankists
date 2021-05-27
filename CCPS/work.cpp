#include "work.h"
#include "ui_work.h"

Work::Work(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Work)
{
    ui->setupUi(this);

    QScreen* screen = QApplication::screens().at(0);
    QSize size = screen->availableSize();
    QFile file;
    QString path (QApplication::applicationDirPath()+ "/" + mylogin + "filename.txt");
    file.setFileName(path);
    ui->frame->setGeometry(0,0, size.width(), size.height());
    ui->frame_2->setGeometry(0,0, size.width(), size.height());
    ui->frame1->setGeometry(0,0, size.width(), size.height());
    ui->frame2->setGeometry(0,0, size.width(), size.height());
    ui->frame3->setGeometry(0,0, size.width(), size.height());
    ui->frame4->setGeometry(0,0, size.width(), size.height());
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(false);
    ui->frame1->setVisible(false);
    ui->frame2->setVisible(false);
    ui->frame4->setVisible(false);
    ui->calendarWidget->setMaximumDate(QDate(QDate::currentDate().addYears(1)));
    ui->calendarWidget->setMinimumDate(QDate::currentDate());
    ui->holiday_button_5->setVisible(false);

     ui->lineEdit_5->setText(""); /// Взять из бд последнюю дату через сервер
     if ( ui->lineEdit_5->text()!="")
     ui->lineEdit_2->setText(""); //


    // Чаты
    ui->pushButton->setGeometry(size.width() * 0, size.height() * 0, size.height() * 0.1, size.height() * 0.1);
    ui->depart_chat_button->setGeometry(size.width() * 0.1, size.height() * 0.15, size.width() * 0.8, size.height() * 0.07);
    // Чат
    ui->textBrowser->setGeometry(size.width() * 0, size.height() * 0.15, size.width() * 1, size.height() * 0.7);
    ui->pushButton_3->setGeometry(size.width() * 0.78, size.height() * 0.9, size.width() * 0.17, size.height() * 0.07);
    ui->pushButton_2->setGeometry(size.width() * 0, size.height() * 0, size.height() * 0.1, size.height() * 0.1);
    ui->textEdit->setGeometry(size.width() * 0.05, size.height() * 0.9, size.width() * 0.7, size.height() * 0.07);
    // Заметки
    ui->pushButton_4->setGeometry(size.width() * 0, size.height() * 0, size.height() * 0.1, size.height() * 0.1);
    ui->textEdit_2->setGeometry(size.width() * 0.05, size.height() * 0.9, size.width() * 0.7, size.height() * 0.07);
    ui->textBrowser_2->setGeometry(size.width() * 0, size.height() * 0.15, size.width() * 1, size.height() * 0.7);
    ui->pushButton_6->setGeometry(size.width() * 0.78, size.height() * 0.9, size.width() * 0.17, size.height() * 0.07);
    /// первый кнопки, выбор между вкладками
    ui->note_button->setGeometry(size.width() * 0.1, size.height() * 0.3, size.width() * 0.8, size.height() * 0.07);
    ui->holiday_button->setGeometry(size.width() * 0.1, size.height() * 0.1, size.width() * 0.8, size.height() * 0.07);
    ui->back_button->setGeometry(size.width() * 0.1, size.height() * 0.9, size.width() * 0.8, size.height() * 0.07);
    ui->chat_button->setGeometry(size.width() * 0.1, size.height() * 0.2, size.width() * 0.8, size.height() * 0.07);
    /// отпуск
    ui->lineEdit->setGeometry(size.width() * 0.1, size.height() * 0.15, size.width() * 0.8, size.height() * 0.07);
    ui->lineEdit_2->setGeometry(size.width() * 0.1, size.height() * 0.25, size.width() * 0.8, size.height() * 0.07);
    ui->lineEdit_4->setGeometry(size.width() * 0.1, size.height() * 0.35, size.width() * 0.8, size.height() * 0.07);
    ui->lineEdit_5->setGeometry(size.width() * 0.1, size.height() * 0.45, size.width() * 0.8, size.height() * 0.07);
    ui->holiday_button_2->setGeometry(size.width() * 0.1, size.height() * 0.65, size.width() * 0.8, size.height() * 0.07);
    ui->pushButton_5->setGeometry(size.width() * 0, size.height() * 0, size.height() * 0.1, size.height() * 0.1);
    /// запланировать отпуск
    ui->lineEdit_3->setGeometry(size.width() * 0.1, size.height() * 0.15, size.width() * 0.8, size.height() * 0.07);
    ui->lineEdit_6->setGeometry(size.width() * 0.1, size.height() * 0.25, size.width() * 0.8, size.height() * 0.07);
    ui->calendarWidget->setGeometry(size.width() * 0.1, size.height() * 0.35, size.width() * 0.8, size.height() * 0.4);
    ui->holiday_button_3->setGeometry(size.width() * 0.1, size.height() * 0.8, size.width() * 0.8, size.height() * 0.07);
    ui->pushButton_7->setGeometry(size.width() * 0, size.height() * 0, size.height() * 0.1, size.height() * 0.1);
    ui->holiday_button_4->setGeometry(size.width() * 0.1, size.height() * 0.8, size.width() * 0.8, size.height() * 0.07);
    ui->lineEdit_7->setGeometry(size.width() * 0.1, size.height() * 0.7, size.width() * 0.8, size.height() * 0.07);
    ui->pushButton_5->setGeometry(size.width() * 0, size.height() * 0, size.height() * 0.1, size.height() * 0.1);
     ui->holiday_button_5->setGeometry(size.width() * 0.1, size.height() * 0.8, size.width() * 0.8, size.height() * 0.07);
    ///

    ui->textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

Work::~Work()
{
    delete ui;
    file.close();
}

void Work::on_back_button_clicked()
{
    hide();
    emit signMy();
}

void Work::on_chat_button_clicked()
{
    ui->frame3->setVisible(false);
    ui->frame->setVisible(true);
}

void Work::on_pushButton_clicked()
{
    ui->frame->setVisible(false);
    ui->frame3->setVisible(true);
}

void Work::on_depart_chat_button_clicked()
{
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(true);
    ui->textBrowser->setText("");

    myuser->chat_history_request("depart");
}

void Work::on_pushButton_2_clicked()
{
    ui->frame_2 ->setVisible(false);
    ui->textBrowser->setText("");
    ui->frame->setVisible(true);
}

void Work::on_pushButton_3_clicked()
{
    QString message = ui->textEdit->text();

    ui->textEdit->setText("");
    myuser->send_message("depart&" + mylogin + "&" + message + "&"); // Не забыть поменять название чата
}

void Work::setPalmalive(QString login, Functions *user)
{
    myuser = new Functions(user->clientAuth);
    mytcpclient = myuser->clientAuth;
    mylogin = login;

    connect(mytcpclient, SIGNAL(writeTextHistory(QString)), SLOT(writeToQTextBrowser(QString)));
}

void Work::writeToQTextBrowser(QString history)
{
    QTextDocument *doc;
    QString html;

    std::string text = history.toStdString();
    QString message;
    QString login;
    int pos;

    while (text != "")
    {
        doc = ui->textBrowser->document();
        html = doc->toHtml();

        pos = text.find("&");
        text.erase(0, pos + 1);
        pos = text.find("&");
        login = QString::fromStdString(text.substr(0, pos));
        text.erase(0, pos + 1);
        pos = text.find("&");
        message = QString::fromStdString(text.substr(0, pos));
        text.erase(0, pos + 1);

        if (mylogin == login)
            ui->textBrowser->setText(html + "<h3 align = \"right\">" + login + "</h3><p align=\"right\">" + message + "</p>");
        else
            ui->textBrowser->setText(html + "<h3 align = \"left\">" + login + "</h3><p align=\"left\">" + message + "</p>");
    }
}

void Work::on_note_button_clicked()
{

    ui->frame3->setVisible(false);
    ui->frame1->setVisible(true);
    QString text;
    //std::ifstream fin(mylogin.toStdString() + "_file.txt");
    //getline(fin, text);
    //fin.close();
    file.open(QIODevice::ReadWrite );
    QTextStream in(&file);
    ui->textEdit_2->setText("12345");
    in >> text;
    ui->textBrowser_2->setText(text);
}

void Work::on_holiday_button_clicked()
{
    ui->frame3->setVisible(false);
    ui->frame2->setVisible(true);
}

void Work::on_pushButton_4_clicked()
{
    ui->frame1->setVisible(false);
    ui->frame3->setVisible(true);
    file.close();
}

void Work::on_pushButton_5_clicked()
{
    ui->frame2->setVisible(false);
    ui->frame3->setVisible(true);
}

void Work::on_pushButton_6_clicked()
{
    //std::ofstream fout(mylogin.toStdString() + "_file.txt");
    QString message = ui->textEdit_2->text();
    QTextDocument *doc;
    QString html;
    QString text;
    doc = ui->textBrowser_2->document();
    html = doc->toHtml();
    ui->textBrowser_2->setText(html+message);
    ui->textEdit_2->setText("");
    QTextStream out(&file);//поток для записи текста
    text = html + message;
    out << text;
    /*std::string text = html.toStdString() + message.toStdString();
    fout << text;
    fout.close();*/
}

void Work::on_holiday_button_2_clicked()
{
    ui->lineEdit_7->setVisible(false);
    ui->frame4->setVisible(true);
    ui->frame2->setVisible(false);
    ui->holiday_button_4->setVisible(true);
}

void Work::on_holiday_button_3_clicked()
{
    todate= ui->calendarWidget->selectedDate();
    std::string temp;
    fromdate_s=std::to_string(fromdate.day())+"."+std::to_string(fromdate.month())+"."+std::to_string(fromdate.year());
    todate_s= std::to_string(todate.day())+"."+std::to_string(todate.month())+"."+std::to_string(todate.year());
    temp = "Вы выбрали дату отпуска от "+ fromdate_s +" до " + todate_s;
    ui->lineEdit_7->setText(QString::fromStdString((temp)));
    ui->holiday_button_3->setVisible(false);
    ui->holiday_button_5->setVisible(true);
    ui->calendarWidget->setVisible(false);
    ui->lineEdit_3->setVisible(false);
    ui->lineEdit_6->setVisible(false);
    ui->lineEdit_7->setVisible(true);

}


void Work::on_holiday_button_4_clicked()
{
    ui->lineEdit_7->setText("Вы выбрали дату отпуска до:");
    fromdate= ui->calendarWidget->selectedDate();
    ui->holiday_button_4->setVisible(false);
    ui->holiday_button_3->setVisible(true);
}

void Work::on_pushButton_7_clicked()
{
    ui->calendarWidget->setVisible(true);
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_6->setVisible(true);
    ui->frame4->setVisible(false);
    ui->frame_2->setVisible(false);
    ui->frame3->setVisible(true);
     ui->holiday_button_5->setVisible(false);
}

void Work::on_holiday_button_5_clicked()
{
    QString temp;
    calendar(temp, fromdate_s, todate_s);
    ui->calendarWidget->setVisible(true);
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_6->setVisible(true);
    ui->frame4->setVisible(false);
    ui->frame_2->setVisible(false);
    ui->frame3->setVisible(true);
     ui->holiday_button_5->setVisible(false);
}
