#include "matchwindow.h"
#include <stdlib.h>
#include <time.h>
#include <QTimer>
#include <iostream>
#include <tgmath.h>

MatchWindow::MatchWindow(QWidget *parent) : QWidget(parent)
{
    QString array[9] = {"Manchester", "Liverpool", "Chelsea",
                           "Arsenal", "Tottenham", "Aston Villa",
                           "Barcelona", "Rangers", "Queens Park"};

    srand (time(NULL));
    int teamNumber = rand() % 10 + 0;

    guest = new Team(array[teamNumber]);

    ui = new(Ui::Match);
    ui->setupUi(this);
    ui->guestGoalDisplay->setPalette(Qt::black);
    ui->homeGoalDisplay->setPalette(Qt::black);

    int guestGoals = rand()% 5 + 0;
    int homeGoals = rand()% 5 + 0;

    double t_budget = home->getTrainingBudget();
    double h_budget = home->getHealthcareBudget();

    std::cout << h_budget << t_budget << std::endl;


    int extraGoals = rand()% 1 + 2;
    extraGoals = extraGoals*t_budget*h_budget;
    std::cout << "extra goals:" << extraGoals << std::endl;


    ui->guestGoalDisplay->display(guestGoals);
    ui->homeGoalDisplay->display(homeGoals);
}

bool MatchWindow::playGame() {
    delete home;
    delete guest;
    delete ui;
}

void MatchWindow::setHomeTeam(Team *home){
    this->home = home;
    QString teamField = home->toString() + " - " + guest->toString();
    ui->teamLabel->setText(teamField);
}

void MatchWindow::setGuestTeam(Team *guest) {
    this->guest = guest;
}
