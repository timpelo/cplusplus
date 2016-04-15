#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setButtonListeners();
    playerTeam = new Team("Fc Milan");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setButtonListeners() {
    connect(ui->playButton, SIGNAL(clicked()), this, SLOT(playGame()));
    connect(ui->teamButton, SIGNAL(clicked()), this, SLOT(teamView()));
}

QString MainWindow::playGame() {
    QString result = "";
    cout << "play game" << endl;
    return result;
}

void MainWindow::teamView() {
    playerListWidget = new QListWidget(this);
    QPushButton* backButton = new QPushButton(this);
    backButton->setText("Back");
    setMenuWidget(backButton);

    for(int i = 0; i < 5; i++ ) {
        Player* pl = playerTeam->getPlayerList()[i];
        QString info = pl->getFname() + " "
                + pl->getLname() + " "
                + " att: " + QString::number(pl->getAttackVal()) + " "
                + " def: " + QString::number(pl->getDefenceVal());

        playerListWidget->addItem(info);
    }

    setCentralWidget(playerListWidget);
}
