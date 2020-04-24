#include "graph.h"

const int MAX = 100000;

graph::graph(int vertices, QObject *parent) : QObject(parent)
{
    vNum = vertices;
    matrix = new int*[vNum];

    for (int row = 0; row < vNum; row++)
    {
        matrix[row] = new int[vNum];
        for (int column = 0; column < vNum; column++)
        {
            matrix[row][column] = 0;
        }
    }
    addEdges();
}

void graph::addEdges()
{
    for (int row = 0; row < vNum; row++)
    {
        for (int column = 0; column < vNum; column++)
        {
            if(control.CheckEdge(getStadiumName(static_cast<stadiums>(row)), getStadiumName(static_cast<stadiums>(column))))
            {
                int distance = control.GetDistBtwnStadium(getStadiumName(static_cast<stadiums>(row)), getStadiumName(static_cast<stadiums>(column)));
                matrix[row][column] = distance;
                matrix[column][row] = distance;
            }
        }
    }
}

QVector<QString> graph::primMst()
{
    QVector<QString> mst;

    int parent[29];
    int key[29];
    bool mstSet[29];

    for(int i = 0; i < vNum; i++)
    {
        key[i] = MAX;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for(int count = 0; count < vNum - 1; count++)
    {
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        for(int v = 0; v < vNum; v++)
        {
            if(matrix[u][v] && mstSet[v] == false && matrix[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = matrix[u][v];
            }
        }
    }
    mst = printMst(parent);
    return mst;
}

int graph::minKey(int key[], bool mstSet[])
{
    int min = MAX;
    int min_index = 0;

    for(int v = 0; v < vNum; v++)
    {
        if(mstSet[v] == false && key[v] < min)
        {
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}

QVector<QString> graph::printMst(int parent[])
{
    QVector<QString> mst;
    for(int i = 1; i < vNum; i++)
    {
        QString distance = QString::number(matrix[i][parent[i]]);
        QString start = getStadiumName(static_cast<stadiums>(parent[i]));
        QString end = getStadiumName(static_cast<stadiums>(i));

        QString str = start + "->" + end + " (Distance: " + distance + ")";

        mst.push_back(str);
    }

    return mst;
}
