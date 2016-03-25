#ifndef MYTIMER_H
#define MYTIMER_H

#include <QObject>
#include <QThread>
#include <QLCDNumber>
#include <QSound>

class MyTimer : public QThread
{

private:
    QLCDNumber* timer_;
    QSound* sound_;
public:
    explicit MyTimer(QLCDNumber* timer = 0);
    void run();
    void playSound();

signals:

public slots:
};

#endif // MYTIMER_H
