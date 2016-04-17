#ifndef MATCHWINDOW_H
#define MATCHWINDOW_H

#include <QWidget>
#include "team.h"
#include "player.h"
#include "ui_match.h"

class MatchWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MatchWindow(QWidget *parent = 0);
    Team* home;
    Team* guest;
    void setHomeTeam(Team* home);
    void setGuestTeam(Team* guest);
    bool playGame();
    Ui::Match* ui;

signals:

public slots:
};

#endif // MATCHWINDOW_H
