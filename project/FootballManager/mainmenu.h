#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include "ui_mainmenu.h"

class MainMenu : public QWidget
{
    Q_OBJECT
public:
    explicit MainMenu(QWidget *parent = 0);
    Ui::MainMenu* ui;

signals:

public slots:
};

#endif // MAINMENU_H
