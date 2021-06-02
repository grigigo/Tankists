#ifndef DATABASE_H
#define DATABASE_H
#include <QtTest>
#include "..\CCPS\mainwindow.h"
#include <QObject>

QVERIFY2(w.ui->password,"Input field left not created");
QVERIFY2(w.ui->login,"Input field right not created");
}

class database
{
    Q_OBJECT
public:
    database();
    ~database();
private slots:
};

#endif // DATABASE_H
