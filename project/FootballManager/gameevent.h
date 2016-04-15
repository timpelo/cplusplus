#ifndef GAMEEVENT_H
#define GAMEEVENT_H

#include <QWidget>
#include "team.h"


class GameEvent : public QWidget
{
    Q_OBJECT
public:
    GameEvent(QWidget* parent = 0);
    Team* home;
    Team* guest;
    void setHomeTeam(Team* home);
    void setGuestTeam(Team* home);
    std::string playGame();
};

#endif // GAMEEVENT_H
