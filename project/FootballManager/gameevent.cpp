#include "gameevent.h"
#include <stdlib.h>
#include <time.h>

GameEvent::GameEvent()
{
    QString array[9] = {"Manchester", "Liverpool", "Chelsea",
                           "Arsenal", "Tottenham", "Aston Villa",
                           "Barcelona", "Rangers", "Queens Park"};

    srand (time(NULL));
    int teamNumber = rand() % 10 + 0;

    Team* team = new Team(array[teamNumber]);

}
