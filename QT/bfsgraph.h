#ifndef BFSGRAPH_H
#define BFSGRAPH_H
#include <QObject>
#include "controller.h"

class bfsgraph : public QObject
{
    Q_OBJECT
public:
    bfsgraph(int vertices, QObject *parent = nullptr);
    void addEdges();
    QVector<QString> bfsTraversal(stadiums start);
    int getDistance();
    stadiums start = TargetField;


signals:
private:
    int distance;
    Controller control;
    int vNum;
    int** adjMatrix;


    QVector<int> sortStadium(stadiums v);
};
#endif // BFSGRAPH_H
