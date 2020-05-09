#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Controller controller;
    graph Graph;
    MainWindow w(&controller,&Graph);
    w.show();

    return a.exec();
}
