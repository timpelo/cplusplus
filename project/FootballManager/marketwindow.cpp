#include "marketwindow.h"
#include "ui_marketwindow.h"

MarketWindow::MarketWindow(Team* team, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarketWindow)
{
    this->team = team;
    ui->setupUi(this);

    for(int i = 0; i < 11; i++ ) {
        Player* pl = team->getPlayerList()[i];
        QString info = pl->getFname() + " "
                + pl->getLname() + " "
                + " att: " + QString::number(pl->getAttackVal()) + " "
                + " def: " + QString::number(pl->getDefenceVal());

        ui->teamList->addItem(info);
    }
}

MarketWindow::~MarketWindow()
{
    delete ui;
}
