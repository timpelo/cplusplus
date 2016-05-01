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
    double getTrainingBudget();
    double getStadionBudget();
    double getHealthcareBudget();
    double getTotalBudget();

    void setTrainingBudget(double budget);
    void setStadionBudget(double budget);
    void setHealthcareBudget(double budget);
    void setTotalBudget(double budget);

private:

    // b_n variables are for budget. Unit is millon euros.
    double b_total;
    double b_training;
    double b_stadion;
    double b_healthcare;
};

#endif // TEAM_H
