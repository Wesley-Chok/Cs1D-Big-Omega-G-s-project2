#ifndef GRAPH_H
#define GRAPH_H

#include <QObject>
#include "controller.h"

class graph : public QObject
{
    Q_OBJECT
public:
    graph(int vertices, QObject *parent = nullptr);
    void addEdges();
    QVector<QString> primMst();

signals:
private:
    Controller control;
    int vNum;
    int** matrix;

    int minKey(int key[], bool mstSet[]);
    QVector<QString> printMst(int parent[]);
};

#endif // GRAPH_H
