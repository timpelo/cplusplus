#include "marketwindow.h"
#include "ui_marketwindow.h"
#include <QDebug>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>

MarketWindow::MarketWindow(Team* team, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarketWindow)
{
    this->team = team;
    ui->setupUi(this);
    setListeners();
    teamPlayerCount = 10;

    srand (time(NULL));

    for(int i = 0; i < 10; i++ ) {
        Player* pl = team->getPlayerList()[i];
        QString info = pl->getFname() + " "
                + pl->getLname() + " "
                + " att: " + QString::number(pl->getAttackVal()) + " "
                + " def: " + QString::number(pl->getDefenceVal());

        ui->teamList->addItem(info);
    }

    QString fnames[20] = {"Diego", "Ronaldo", "Michael", "Wayne",
                      "Harry", "Sam", "Rooger", "Henry", "Marty",
                      "Gordon", "Harry", "Maxwell", "Bart", "Ian",
                      "Samuel", "Juan", "Michael", "Bern", "Rex", "George"};

    for(int i = 0; i < 20; i++ ) {
        int attack = rand() % 50 + 50;
        int defence = rand() % 50 + 50;
        Player pl(fnames[i], "Jordan", attack, defence);
        QString info = pl.getFname() + " "
                + pl.getLname() + " "
                + "att: " + QString::number(pl.getAttackVal()) + " "
                + "def: " + QString::number(pl.getDefenceVal());

        ui->marketList->addItem(info);
    }
}

MarketWindow::~MarketWindow()
{
    delete ui;
}

void MarketWindow::setListeners() {
    connect(ui->buyButton, SIGNAL(clicked()), this, SLOT(buyPlayer()));
    connect(ui->sellButton, SIGNAL(clicked()), this, SLOT(sellPlayer()));

}

void MarketWindow::buyPlayer() {


    if(teamPlayerCount < 10) {
        QList<QListWidgetItem*> list =  ui->marketList->selectedItems();
        teamPlayerCount = teamPlayerCount + 1;

        QString player =  list.at(0)->text();
        QStringList playertAttrList = player.split(" ");
        Player* boughtPlayer = new Player(playertAttrList.at(0),
                                          playertAttrList.at(1),
                                          playertAttrList.at(3).toInt(),
                                          playertAttrList.at(5).toInt());


        ui->teamList->addItem(list.at(0)->text());
        qDeleteAll(ui->marketList->selectedItems());
    }




}

void MarketWindow::sellPlayer() {


    if(teamPlayerCount > 0) {
        QList<QListWidgetItem*> list =  ui->teamList->selectedItems();
        teamPlayerCount = teamPlayerCount - 1;

        QString player =  list.at(0)->text();
        QStringList playertAttrList = player.split(" ");
        Player* boughtPlayer = new Player(playertAttrList.at(0),
                                          playertAttrList.at(1),
                                          playertAttrList.at(3).toInt(),
                                          playertAttrList.at(5).toInt());

        ui->marketList->addItem(list.at(0)->text());
        qDeleteAll(ui->teamList->selectedItems());
        std::cout << "sell size" << teamPlayerCount <<std::endl;
    }

}


