#ifndef MYTIMER_H
#define MYTIMER_H

#include <QObject>
#include <QThread>
#include <QLCDNumber>
#include <QSoundEffect>

class MyTimer : public QThread
{

    Q_OBJECT

private:
    QLCDNumber* timer_;
    QSoundEffect* player_;
    bool soundLoaded_;

public:
    explicit MyTimer(QLCDNumber* timer = 0);
    ~MyTimer();
    void run();
    void playSound();
    void setSound(QString fileName);


signals:

public slots:
    void loadComplete();
    void randomSound();
};

#endif // MYTIMER_H
