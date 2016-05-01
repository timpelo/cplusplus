#include "team.h"

Team::Team(QString name): name(name)
{
    playerList = new Player*[11];


    // Inserst dummy data to playerList. Will be repleaced.
    Player* player = new Player("Christian", "Abbiati", 77, 95);
    playerList[0] = player;

    Player* player2 = new Player("Ignazio", "Abate", 75, 80);
    playerList[1] = player2;

    Player* player3 = new Player("Luca", "Antonelli", 55, 85);
    playerList[2] = player3;

    Player* player4 = new Player("Rodrigo", "Ely", 68, 82);
    playerList[3] = player4;

    Player* player5 = new Player("Philippe", "Mexes", 85, 90);
    playerList[4] = player5;

    Player* player6 = new Player("Juraj", "Kucka", 85, 85);
    playerList[5] = player6;

    Player* player7 = new Player("Jose", "Mauri", 90, 87);
    playerList[6] = player7;

    Player* player8 = new Player("Andrea", "Poli", 88, 88);
    playerList[7] = player8;

    Player* player9 = new Player("Manuel", "Locatelli", 96, 96);
    playerList[8] = player9;

    Player* player10 = new Player("Mario", "Balotelli", 99, 82);
    playerList[9] = player10;

    Player* player11 = new Player("Jeremy", "Menez", 98, 75);
    playerList[10] = player11;

    b_total = 20;
    b_training = 10;
    b_stadion = 5;
    b_healthcare = 5;

}

Team::~Team() {
    delete playerList;
}

Player** Team::getPlayerList() {
    return playerList;
}

void Team::printPlayers() {
    using namespace std;

    //for(int i = 0; i < 5; i++) {
    //    Player* tmp = playerList[i];
    //    cout << tmp->getFname() + " " + tmp->getLname();
    //    cout << " att: " + tmp->getAttackVal() + " def: " + tmp->getDefenceVal() + endl;
    //    cout << "--------------------------------------------------" + endl;
    //}
}

QString Team::toString() {
    return name;
}

double Team::getTrainingBudget() {
    return b_training;
}

double Team::getStadionBudget() {
    return b_stadion;
}

double Team::getHealthcareBudget() {
    return b_healthcare;
}

double Team::getTotalBudget() {
    return b_total;
}

void Team::setTrainingBudget(double budget){
    b_training = budget;
}

void Team::setStadionBudget(double budget){
    b_stadion = budget;
}
void Team::setHealthcareBudget(double budget){
    b_healthcare = budget;
}

void Team::setTotalBudget(double budget){
    b_total = budget;
}
