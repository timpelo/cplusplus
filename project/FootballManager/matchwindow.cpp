#include "matchwindow.h"
#include <stdlib.h>
#include <time.h>

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
}

bool MatchWindow::playGame() {
    delete home;
    delete guest;
    delete ui;
}
