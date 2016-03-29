#include "mywindow.h"
#include <iostream>


using namespace std;

MyWindow::MyWindow(QWidget *parent) : QMainWindow(parent)
{   
    centralWidget = new QLabel(this);
    centralWidget->setFixedHeight(860);
    centralWidget->setFixedWidth(860);

    menubar = new QMenuBar(this);
    fileMenu = new QMenu(tr("File"), this);
    toolsMenu = new QMenu(tr("Tools"), this);
    helpMenu = new QMenu(tr("Help"), this);
    toolbar = new QToolBar(this);

    createActions();
    createTools();

    fileMenu->addAction(exitAction);
    toolsMenu->addAction(penAction);
    toolsMenu->addAction(eraserAction);
    helpMenu->addAction(aboutAction);

    menubar->addMenu(fileMenu);
    menubar->addMenu(toolsMenu);
    menubar->addMenu(helpMenu);

    setCentralWidget(centralWidget);
    setMenuBar(menubar);
    addToolBar(toolbar);

    cout << "window created" << endl;
}

MyWindow::~MyWindow() {
    cout << "window deleted" << endl;
}

void MyWindow::createActions() {
    exitAction = new QAction(tr("Exit"), this);
    connect(exitAction, &QAction::triggered, this, &MyWindow::exit);

    penAction = new QAction(tr("Use Pen"), this);
    connect(penAction, &QAction::triggered, this, &MyWindow::exit);

    eraserAction = new QAction(tr("Use Eraser"), this);
    connect(eraserAction, &QAction::triggered, this, &MyWindow::exit);

    aboutAction = new QAction(tr("About"), this);
    connect(aboutAction, &QAction::triggered, this, &MyWindow::showInfo);
}

void MyWindow::createTools() {
    toolbar->addAction(exitAction);
    toolbar->addAction(penAction);
    toolbar->addAction(eraserAction);
    toolbar->addAction(aboutAction);
}

void MyWindow::exit() {
    close();
}

void MyWindow::showInfo() {
    QMessageBox* msg = new QMessageBox();
    msg->setText(tr("Created by Jani Timonen"));
    msg->setVisible(true);
}
