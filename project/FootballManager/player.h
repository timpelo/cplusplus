#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <QString>

class Player
{
public:
    Player(QString fname, QString lname, int attackVal, int defenceVal);
    QString fname;
    QString lname;
    int attackVal;
    int defenceVal;

    QString getFname();
    QString getLname();
    int getAttackVal();
    int getDefenceVal();
};

#endif // PLAYER_H
