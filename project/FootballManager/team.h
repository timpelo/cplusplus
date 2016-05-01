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
    int getTrainingBudget();
    int getStadionBudget();
    int getHealthcareBudget();
    int getTotalBudget();

private:

    // b_n variables are for budget. Unit is millon euros.
    int b_total;
    int b_training;
    int b_stadion;
    int b_healthcare;
};

#endif // TEAM_H
