#include "team.h"

Team::Team(QString name): name(name)
{
    playerList = new Player*[20];


    // Inserst dummy data to playerList. Will be repleaced.
    Player* player = new Player("Christiano", "Ronaldo", 99, 88);
    playerList[0] = player;

    Player* player2 = new Player("Sami", "Hyypia", 83, 77);
    playerList[1] = player2;

    Player* player3 = new Player("Lionel", "Messi", 65, 65);
    playerList[2] = player3;

    Player* player4 = new Player("Zlatan", "Ibrahimovic", 77, 77);
    playerList[3] = player4;

    Player* player5 = new Player("Wayne", "Rooney", 90, 45);
    playerList[4] = player5;

    b_total = 150;
    b_training = 30;
    b_salaries = 100;
    b_maintenance = 20;

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
