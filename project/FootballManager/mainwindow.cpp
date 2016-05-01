#include "mainwindow.h"
#include "matchwindow.h"
#include "teamwindow.h"
#include "marketwindow.h"

#include "ui_mainwindow.h"
#include "ui_mainmenu.h"
#include "ui_teamwindow.h"
#include "ui_marketwindow.h"

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
    connect(mainMenu->ui->marketButton, SIGNAL(clicked()), this, SLOT(showMarket()));
    connect(mainMenu->ui->quitButton, SIGNAL(clicked()), this, SLOT(quitGame()));
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
    TeamWindow* teamWidget = new TeamWindow(playerTeam, this);
    setMenuWidget(backButton);
    backButton->setVisible(true);
    setCentralWidget(teamWidget);
}

void MainWindow::showMenu(){

    if(backButton->isVisible()) {
        backButton->setVisible(false);
    }

    mainMenu = new MainMenu(this);
    setCentralWidget(mainMenu);
    setButtonListeners();

}

void MainWindow::showMarket() {
    MarketWindow* market = new MarketWindow(playerTeam, this);
    setMenuWidget(backButton);
    backButton->setVisible(true);
    setCentralWidget(market);
}

void MainWindow::quitGame() {
    close();
}

