#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QPushButton>
#include <string>
#include "team.h";
#include "player.h"
#include "mainmenu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Team* playerTeam;
    QListWidget* playerListWidget;
    QPushButton* backButton;
    MainMenu* mainMenu;

private:
    Ui::MainWindow *ui;
    void setButtonListeners();

public slots:
    bool playGame();
    void teamView();
    void showMenu();
};

#endif // MAINWINDOW_H
