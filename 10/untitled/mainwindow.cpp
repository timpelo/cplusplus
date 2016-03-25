#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytimer.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->playButton, SIGNAL(clicked()), this, SLOT(startTimer()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startTimer() {
    MyTimer* mytimer = new MyTimer(ui->timer);
    mytimer->start();
}
