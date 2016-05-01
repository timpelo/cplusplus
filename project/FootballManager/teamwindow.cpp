#include "teamwindow.h"
#include <iostream>

TeamWindow::TeamWindow(Team* team, QWidget *parent) : QWidget(parent)
{
    this->team = team;
    ui = new(Ui::TeamWindow);
    ui->setupUi(this);

    for(int i = 0; i < 11; i++ ) {
        Player* pl = team->getPlayerList()[i];
        QString info = pl->getFname() + " "
                + pl->getLname() + " "
                + " att: " + QString::number(pl->getAttackVal()) + " "
                + " def: " + QString::number(pl->getDefenceVal());

        ui->playerList->addItem(info);
    }

    // Set budgets for ui elements.

    QString total = QString::number(team->getTotalBudget()) + " mil. €";
    ui->budgetTotal->setText(total);
    ui->budgetHealthcare->setValue(team->getHealthcareBudget());
    ui->budgetStadion->setValue(team->getStadionBudget());
    ui->budgetTraining->setValue(team->getTrainingBudget());

    setListeners();
}

void TeamWindow::setListeners() {
    connect(ui->budgetStadion, SIGNAL(valueChanged(double)), this, SLOT(changeStadionBudget()));
    connect(ui->budgetTraining, SIGNAL(valueChanged(double)), this, SLOT(changeTrainingBudget()));
    connect(ui->budgetHealthcare, SIGNAL(valueChanged(double)), this, SLOT(changeHealthcareBudget()));
}

void TeamWindow::changeTrainingBudget(){
    double budget = ui->budgetTraining->value();
    team->setTrainingBudget(budget);
    updateTotalBudget();
}

void TeamWindow::changeStadionBudget(){
    double budget = ui->budgetStadion->value();
    team->setStadionBudget(budget);
    updateTotalBudget();
}

void TeamWindow::changeHealthcareBudget(){
    double budget = ui->budgetHealthcare->value();
    team->setHealthcareBudget(budget);
    updateTotalBudget();
}

void TeamWindow::updateTotalBudget() {


    double total = team->getHealthcareBudget() + team->getStadionBudget() + team->getTrainingBudget();
    team->setTotalBudget(total);
    QString totalString = QString::number(total) + " mil. $";
    ui->budgetTotal->setText(totalString);

    std::cout<<"REPORT:" << std::endl;
    std::cout<<"training:" << team->getTrainingBudget() << std::endl;
    std::cout<<"stadion:" << team->getStadionBudget() <<std::endl;
    std::cout<<"health:" << team->getHealthcareBudget() << std::endl;
    std::cout<<"total:" << team->getTotalBudget() <<std::endl;
}
