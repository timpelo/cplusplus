#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <iostream>
#include "player.h"

class Team
{
public:
    Team(QString name);
    ~Team();
    QString name;
    Player** playerList;
    Player** getPlayerList();
    void printPlayers();
    QString toString();

private:

    // b_n variables are for budget. Unit is millon euros.
    int b_total;
    int b_training;
    int b_salaries;
    int b_maintenance;
};

#endif // TEAM_H
