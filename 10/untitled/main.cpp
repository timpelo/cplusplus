#include "mainwindow.h"
#include <QApplication>
#include<QTranslator>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator appTranslator;
    appTranslator.load("myapp_fi", QDir::currentPath());
    a.installTranslator(&appTranslator);
    MainWindow w;
    w.show();

    return a.exec();
}
