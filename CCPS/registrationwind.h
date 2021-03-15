#ifndef REGISTRATIONWIND_H
#define REGISTRATIONWIND_H

#include <QDialog>

namespace Ui {
class registrationwind;
}

class registrationwind : public QDialog
{
    Q_OBJECT

public:
    explicit registrationwind(QWidget *parent = nullptr);
    ~registrationwind();

private slots:
    void on_pushButton_3_clicked();

    void on_sign_up_button_clicked();

    void on_back_button_clicked();

private:
    Ui::registrationwind *ui;

signals:
    void signReg();
};

#endif // REGISTRATIONWIND_H
