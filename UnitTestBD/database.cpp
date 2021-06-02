#include "database.h"

database::database()
{
 QVERIFY2(w.ui->password,"Input field left not created");
 QVERIFY2(w.ui->login,"Input field right not created");
}
database::~database()
{

}
