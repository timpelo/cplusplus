#include "mytimer.h"
#include <iostream>

using namespace std;
MyTimer::MyTimer(QLCDNumber* timer) : timer_(timer)
{
    player_ = new QSound("/home/jani/projects/cplusplus/10/untitled/sounds/bark.wav");
}
void MyTimer::run() {
    int time = timer_->intValue();
    while(time > 0) {
        sleep(1);
        time = time -1;
        timer_->display(time);
    }

    playSound();


}

void MyTimer::playSound() {
    cout << "inside " << endl;
    player_->play();
}

void MyTimer::setSound(QString fileName) {
    delete player_;
    player_ = new QSound("/home/jani/projects/cplusplus/10/untitled/sounds/" + fileName);
}
