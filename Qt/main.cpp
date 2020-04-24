#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Controller controller;
    MainWindow w(&controller);
    w.show();

    //MST TEST
    graph g(30);

    QVector<QString> s = g.primMst();

    for(int i = 0; i < s.size(); i++)
    {
        qDebug() << s[i] << endl;
    }
    qDebug() << g.getDistance();

    //BFS TEST
    QVector<QString> b = g.bfsTraversal(TargetField);

    for(int i = 0; i < b.size(); i++)
    {
        qDebug() << b[i] << endl;
    }
    qDebug() << g.getDistance();

    //DFS TEST
    qDebug() << "\n-------------DFS----------------";
    QVector<QString> dfs = g.DFS(ATTPark);
    for(QString item:dfs)
    {
        qDebug() << item << endl;
    }
    qDebug() << g.getDistance();
    return a.exec();
}
