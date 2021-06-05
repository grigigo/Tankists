#include <QtTest>

#include "..\CCPS\functions.h"
// add necessary includes here

class UnitTest : public QObject
{
    Q_OBJECT

public:
    UnitTest();
    ~UnitTest();

private slots:
    void test_case1();

};

UnitTest::UnitTest()
{

}

UnitTest::~UnitTest()
{

}

void UnitTest::test_case1()
{
    Functions temp;
    bool res = temp.registration("user1","123");
    QVERIFY2(res,"Input field password not created");
}

QTEST_APPLESS_MAIN(UnitTest)

#include "tst_unittest.moc"
