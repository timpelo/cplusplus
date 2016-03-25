#include "mytimer.h"

MyTimer::MyTimer(QLCDNumber* timer) : timer_(timer)
{

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
    soud_ = new QSound("sound.mp3");
    sound_->play();
}
