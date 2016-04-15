#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <string>
#include "team.h";
#include "player.h"

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

private:
    Ui::MainWindow *ui;
    void setButtonListeners();

public slots:
    QString playGame();
    void teamView();
};

#endif // MAINWINDOW_H
