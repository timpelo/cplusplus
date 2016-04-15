#ifndef GAMEEVENT_H
#define GAMEEVENT_H

#include "team.h"
#include <string>


class GameEvent
{
public:
    GameEvent();
    Team* home;
    Team* guest;
    void setHomeTeam(Team* home);
    void setGuestTeam(Team* home);
    std::string playGame();
};

#endif // GAMEEVENT_H
