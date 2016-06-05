#ifndef JOSE_CLOCK_H
#define JOSE_CLOCK_H
#include <QObject>
#include <QTime>
#include <QString>
#include <QTimer>

class Jose_Clock : public QObject
{
    Q_OBJECT
public:
    explicit Jose_Clock(QObject * parent = 0);
    Q_INVOKABLE void init();

signals:
    void minute(QString time);

public slots:
    void tick();

private:
    QTime time;
    QTimer timer;
};

#endif // JOSE_CLOCK_H
