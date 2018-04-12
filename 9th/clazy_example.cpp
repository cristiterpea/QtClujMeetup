#include <QObject>
#include <QString>
#include <QDateTime>

class TestObject : public QObject {
public:
    TestObject();
    QString m_str;
};

class SomeClass: public QObject
{
public:
    SomeClass();
};

TestObject::TestObject()
{
    qgetenv("ENV_VARIABLE").isNull();

    bool ok;
    m_str.mid(5).toInt(&ok);

    QDateTime::currentDateTime().toTime_t();

    QObject::connect(this, SIGNAL(someSignal()), SLOT(someSlot()));
}
