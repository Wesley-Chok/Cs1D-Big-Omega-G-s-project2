#include "bfsgraph.h"

bfsgraph::bfsgraph(int vertices, QObject *parent) : QObject(parent)
{
    distance = 0;
    vNum = vertices;
    adjMatrix = new int*[vNum];

    for (int row = 0; row < vNum; row++)
    {
        adjMatrix[row] = new int[vNum];
        for (int column = 0; column < vNum; column++)
        {
            adjMatrix[row][column] = 0;
        }
    }
    addEdges();
}

void bfsgraph::addEdges()
{
    for (int row = 0; row < vNum; row++)
    {
        for (int column = 0; column < vNum; column++)
        {
            if(control.CheckEdge(getStadiumName(static_cast<stadiums>(row)), getStadiumName(static_cast<stadiums>(column))))
            {
                int distance = control.GetDistBtwnStadium(getStadiumName(static_cast<stadiums>(row)), getStadiumName(static_cast<stadiums>(column)));
                adjMatrix[row][column] = distance;
                adjMatrix[column][row] = distance;
            }
        }
    }
}

QVector<QString> bfsgraph::bfsTraversal(stadiums start)
{

    QVector<QString> trav;
    QVector<bool> visited(vNum, false);
    QVector<int> q;
    q.push_back(static_cast<int>(start));

    visited[start] = true;

    int vis;

    while(!q.empty())
    {
        vis = q[0];

        trav.push_back(getStadiumName(static_cast<stadiums>(vis)));
        q.erase(q.begin());

        QVector<int> vec = sortStadium(static_cast<stadiums>(vis));

        QVector<int>::iterator i;

        for(i = vec.begin(); i != vec.end(); i++)
        {
            if(adjMatrix[vis][*i] == 1 && (!visited[*i]))
            {
                q.push_back(*i);
                visited[*i] = true;
                distance += control.GetDistBtwnStadium(getStadiumName(static_cast<stadiums>(vis)), getStadiumName(static_cast<stadiums>(*i)));
            }
        }
    }

    return trav;
}


QVector<int> bfsgraph::sortStadium(stadiums v)
{
    QVector<int> vec;

    for(int j = 0; j < vNum; j++)
    {
        vec.push_back(j);
    }

    bool swap = true;
    while(swap)
    {
        swap = false;
        int size = vec.size();
        for(int i = 0; i < size - 1; i++)
        {
            if(control.GetDistBtwnStadium(getStadiumName(v), getStadiumName(static_cast<stadiums>(vec[i]))) > control.GetDistBtwnStadium(getStadiumName(v), getStadiumName(static_cast<stadiums>(vec[i+1]))))
            {
                int temp = vec[i];
                vec[i] = vec[i+1];
                vec[i+1] = temp;
                swap = true;
            }
        }
    }

    return vec;
}

int bfsgraph::getDistance()
{
    return distance;
}

