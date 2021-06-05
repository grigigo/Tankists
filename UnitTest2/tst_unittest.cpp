#include <QtTest>
#include "..\Server\function.h"
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
    QVERIFY2(calendar("user1"),"Input field password not created");
}

QTEST_APPLESS_MAIN(UnitTest)

#include "tst_unittest.moc"
