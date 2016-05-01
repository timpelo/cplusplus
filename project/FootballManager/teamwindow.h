#ifndef TEAMWINDOW_H
#define TEAMWINDOW_H

#include <QWidget>
#include "team.h"
#include "player.h"
#include "ui_teamwindow.h"

class TeamWindow : public QWidget
{
    Q_OBJECT
public:
    explicit TeamWindow(Team* team, QWidget *parent = 0);
    Team* team;
    void updateTotalBudget();
    void setListeners();

private:
    Ui::TeamWindow* ui;

signals:

public slots:
    void changeTrainingBudget();
    void changeStadionBudget();
    void changeHealthcareBudget();
};

#endif // TEAMWINDOW_H
