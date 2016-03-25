#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytimer.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myTimer_ = new MyTimer(ui->timer);
    soundList = ui->soundList;

    QObject::connect(ui->playButton, SIGNAL(clicked()), this, SLOT(startTimer()));
    QObject::connect(ui->playNowButton, SIGNAL(clicked()), this, SLOT(playNow()));
    QObject::connect(ui->playRandomButton, SIGNAL(clicked()), myTimer_, SLOT(randomSound()));

    ui->playButton->setText(tr("Play"));
    ui->playNowButton->setText(tr("Play Now"));
    ui->playRandomButton->setText(tr("Play Random"));
    soundList->addItem("bark.wav");
    soundList->addItem("gun.wav");
    soundList->addItem("horn.wav");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete soundList;
    delete myTimer_;
}

void MainWindow::startTimer() {
    QString file = soundList->selectedItems().at(0)->text();
    myTimer_->setSound(file);
    myTimer_->start();
}

void MainWindow::playNow() {
    ui->timer->display(0);
    QString file = soundList->selectedItems().at(0)->text();
    myTimer_->setSound(file);
    myTimer_->start();
}

