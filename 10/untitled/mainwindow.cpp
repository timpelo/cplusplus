#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytimer.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->playButton, SIGNAL(clicked()), this, SLOT(startTimer()));
    QObject::connect(ui->playNowButton, SIGNAL(clicked()), this, SLOT(playNow()));
    QPushButton* play = ui->playButton;
    QPushButton* playNow = ui->playNowButton;
    QPushButton* playRandom = ui->playRandomButton;
    soundList = ui->soundList;

    play->setText(tr("Play"));
    playNow->setText(tr("Play Now"));
    playRandom->setText(tr("Play Random"));
    soundList->addItem("bark.wav");
    soundList->addItem("thunder.wav");
    soundList->addItem("horn.mp3");
    soundList->addItem("bongo.wav");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete soundList;
}

void MainWindow::startTimer() {
    QString file = soundList->selectedItems().at(0)->text();
    MyTimer* myTimer = new MyTimer(ui->timer);
    myTimer->setSound(file);
    myTimer->start();
}

void MainWindow::playNow() {
    QString file = soundList->selectedItems().at(0)->text();
    MyTimer* myTimer = new MyTimer(ui->timer);
    myTimer->setSound(file);
    myTimer->playSound();
}

