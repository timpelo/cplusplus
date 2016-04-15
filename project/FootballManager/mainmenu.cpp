#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QPixmap>

MainMenu::MainMenu(QWidget *parent) : QWidget(parent), ui(new Ui::MainMenu)
{

    ui->setupUi(this);
    QPixmap pix("E:/Library/School/Programming/cplusplus/project/FootballManager/images/menu_bg.png");
    ui->bg->setPixmap(pix);
}
