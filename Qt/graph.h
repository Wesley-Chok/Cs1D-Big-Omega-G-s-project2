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
    int getDistance();

    //MST
    QVector<QString> primMst();

    //BFS
    QVector<QString> bfsTraversal(stadiums start);

    //DFS
    QVector<QString> DFS(stadiums start);

signals:
private:
    int distance;
    Controller control;
    int vNum;
    int** matrix;

    //MST
    int minKey(int key[], bool mstSet[]);
    QVector<QString> printMst(int parent[]);

    //BFS
    QVector<int> sortStadium(stadiums v);

    //DFS
    void DFSUtil(stadiums start, bool visited[], QVector<QString> &dfsPath);
};

#endif // GRAPH_H
