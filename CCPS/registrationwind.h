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

private:
    Ui::registrationwind *ui;
};

#endif // REGISTRATIONWIND_H
