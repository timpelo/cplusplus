#include "mainwindow.h"
#include "matchwindow.h"
#include "ui_mainwindow.h"
#include "ui_mainmenu.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedHeight(860);
    setFixedHeight(860);

    mainMenu = new MainMenu(this);

    backButton = new QPushButton(this);
    backButton->setText("Back");
    backButton->setVisible(false);

    setButtonListeners();
    playerTeam = new Team("A.C Milan");

    setCentralWidget(mainMenu);
    setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setButtonListeners() {
    connect(mainMenu->ui->playButton, SIGNAL(clicked()), this, SLOT(playGame()));
    connect(mainMenu->ui->teamButton, SIGNAL(clicked()), this, SLOT(teamView()));
    connect(backButton, SIGNAL(clicked()), this, SLOT(showMenu()));
}

bool MainWindow::playGame() {
    MatchWindow* matchWindow = new MatchWindow(this);
    matchWindow->setHomeTeam(playerTeam);
    setMenuWidget(backButton);
    backButton->setVisible(true);
    setCentralWidget(matchWindow);
    return true;
}

void MainWindow::teamView() {
    playerListWidget = new QListWidget(this);
    setMenuWidget(backButton);
    backButton->setVisible(true);

    for(int i = 0; i < 11; i++ ) {
        Player* pl = playerTeam->getPlayerList()[i];
        QString info = pl->getFname() + " "
                + pl->getLname() + " "
                + " att: " + QString::number(pl->getAttackVal()) + " "
                + " def: " + QString::number(pl->getDefenceVal());

        playerListWidget->addItem(info);
    }

    setCentralWidget(playerListWidget);
}

void MainWindow::showMenu(){

    if(backButton->isVisible()) {
        backButton->setVisible(false);
    }

    mainMenu = new MainMenu(this);
    setCentralWidget(mainMenu);
    setButtonListeners();

}
