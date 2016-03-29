#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QMenuBar>
#include <QAction>
#include <QMessageBox>
#include <QToolBar>


class MyWindow : public QMainWindow
{
    Q_OBJECT

private:
    QLabel* centralWidget;
    QMenuBar* menubar;
    QToolBar* toolbar;
    QMenu* fileMenu;
    QMenu* toolsMenu;
    QMenu* helpMenu;
    QAction* exitAction;
    QAction* penAction;
    QAction* eraserAction;
    QAction* aboutAction;
public:
    explicit MyWindow(QWidget *parent = 0);
    ~MyWindow();
    void createActions();
    void createTools();

signals:

public slots:
    void exit();
    void showInfo();
};

#endif // MYWINDOW_H
