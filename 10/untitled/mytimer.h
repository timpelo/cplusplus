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
    QSound* player_;

public:
    explicit MyTimer(QLCDNumber* timer = 0);
    void run();
    void playSound();
    void setSound(QString fileName);

signals:

public slots:
};

#endif // MYTIMER_H
