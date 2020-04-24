#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Controller controller;
    MainWindow w(&controller);
    w.show();

//    //Daniel's Tests Start
//    graph g(30);

//    QVector<QString> s = g.primMst();

//    for(int i = 0; i < s.size(); i++)
//    {
//        qDebug() << s[i] << endl;
//    }
//    //Daniel's Tests End


    bfsgraph bfs(30);

    QVector<QString> b = bfs.bfsTraversal(TargetField);

    for(int i = 0; i < b.size(); i++)
    {
        qDebug() << b[i] << endl;
    }

    qDebug() << bfs.getDistance();
    return a.exec();
}
