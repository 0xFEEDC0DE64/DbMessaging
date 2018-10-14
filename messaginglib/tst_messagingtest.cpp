#include <QtTest>
#include <QDate>
#include <QDateTime>
#include <QVariantMap>
#include <QDebug>

#include "messages/mymessage.h"

class MessagingTest : public QObject
{
    Q_OBJECT

public:
    MessagingTest();
    ~MessagingTest();

private slots:
    void test_case1();

};

MessagingTest::MessagingTest()
{

}

MessagingTest::~MessagingTest()
{

}

void MessagingTest::test_case1()
{
    MyMessage original("Daniel", QDate(1996, 11, 12), QDateTime::currentDateTime(), 21, 80);
    MyMessage copy(original);

    original.setName("Peter");

    QVariantMap delta;
    original.copyTouchedTo(delta);
    original.setTouched(false);

    qDebug() << "before applying delta";
    copy.debug();

    copy.apply(delta);

    qDebug() << "after applying delta";
    copy.debug();
}

QTEST_APPLESS_MAIN(MessagingTest)

#include "tst_messagingtest.moc"
