#ifndef MARKETWINDOW_H
#define MARKETWINDOW_H

#include <QWidget>
#include "team.h"
#include "player.h"

namespace Ui {
class MarketWindow;
}

class MarketWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MarketWindow(Team* team, QWidget *parent = 0);
    ~MarketWindow();
    void setListeners();
    int teamPlayerCount;

private:
    Ui::MarketWindow *ui;
    Team* team;

public slots:
    void buyPlayer();
    void sellPlayer();
};

#endif // MARKETWINDOW_H
