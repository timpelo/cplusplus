#include "player.h"

Player::Player(QString fname, QString lname, int attackVal, int defenceVal):
    fname(fname), lname(lname), attackVal(attackVal), defenceVal(defenceVal)
{

}

QString Player::getFname() {
    return fname;
}

QString Player::getLname() {
    return lname;
}

int Player::getAttackVal() {
    return attackVal;
}

int Player::getDefenceVal() {
    return defenceVal;
}
