#include "mytimer.h"
#include <iostream>
#include <QDebug>
#include <stdlib.h>
#include <time.h>
#include <QDir>

using namespace std;
MyTimer::MyTimer(QLCDNumber* timer) : timer_(timer)
{
    player_ = new QSoundEffect();
    player_->setSource(QUrl::fromLocalFile(QDir::currentPath() + "/sounds/bark.wav"));
    soundLoaded_= false;
    QObject::connect(player_, SIGNAL(loadedChanged()), this, SLOT(loadComplete()));
}
void MyTimer::run() {
    int time = timer_->intValue();
    while(time > 0 && soundLoaded_ == false) {
        sleep(1);
        time = time -1;
        timer_->display(time);
    }

    playSound();


}

MyTimer::~MyTimer() {
    delete player_;
    qDebug() << "timer deleted";
}

void MyTimer::playSound() {
    QString source = player_->source().toString();
    qDebug() << source;
    player_->play();
}

void MyTimer::setSound(QString fileName) {
    soundLoaded_ = false;
    player_->setSource(QUrl::fromLocalFile(QDir::currentPath() + "/sounds/" + fileName));
}

void MyTimer::loadComplete() {
    soundLoaded_=true;
}

void MyTimer::randomSound() {
    srand(time(NULL));
    int random = rand() % 3 + 1;

    switch (random) {
    case 1:
        setSound("bark.wav");
        break;
    case 2:
        setSound("horn.wav");
        break;
    case 3:
        setSound("gun.wav");
        break;
    default:
        break;
    }

    timer_->display(0);
    start();
}
