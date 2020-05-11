#include "graph.h"

#include "graph.h"

const int MAX = 100000;

graph::graph(QObject *parent) : QObject(parent)
{
    vNum = control.getStadiumCount();
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
            if(control.CheckEdge(control.getStadiumName(static_cast<stadiums>(row)), control.getStadiumName(static_cast<stadiums>(column))))
            {
                int distance = control.GetDistBtwnStadium(control.getStadiumName(static_cast<stadiums>(row)), control.getStadiumName(static_cast<stadiums>(column)));
                matrix[row][column] = distance;
                matrix[column][row] = distance;
            }
        }
    }
}

int graph::getDistance()
{
    return distance;
}

//MST
QVector<QString> graph::primMst()
{
    distance = 0;
    QVector<QString> mst;

    QVector<int> parent(vNum);
    QVector<int> key(vNum);
    QVector<bool> mstSet(vNum);

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

int graph::minKey(QVector<int> key, QVector<bool> mstSet)
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

QVector<QString> graph::printMst(QVector<int> parent)
{
    QVector<QString> mst;
    for(int i = 1; i < vNum; i++)
    {
        distance += matrix[i][parent[i]];
        QString distance = QString::number(matrix[i][parent[i]]);
        QString start = control.getStadiumName(static_cast<stadiums>(parent[i]));
        QString end = control.getStadiumName(static_cast<stadiums>(i));

        QString str = start + "->" + end + " (Distance: " + distance + ")";

        mst.push_back(str);
    }

    return mst;
}

//BST
QVector<QString> graph::bfsTraversal(stadiums start)
{
    distance = 0;
    QVector<QString> trav;

    QVector<bool> visited(vNum, false);
    QVector<int> q;
    q.push_back(static_cast<int>(start));

    visited[start] = true;

    int vis;
    while(!q.empty())
    {
        vis = q[0];

        trav.push_back(control.getStadiumName(static_cast<stadiums>(vis)));
        q.erase(q.begin());

        QVector<int> vec = sortStadium(static_cast<stadiums>(vis));

        QVector<int>::iterator i;
        for(i = vec.begin(); i != vec.end(); i++)
        {
            if(matrix[vis][*i] != 0 && (!visited[*i]))
            {
                q.push_back(*i);
                visited[*i] = true;
                distance += matrix[vis][*i];
            }
        }
    }
    return trav;
}


QVector<int> graph::sortStadium(stadiums v)
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
            if(matrix[v][vec[i]] > matrix[v][vec[i+1]])
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

//-----------------------DFS-----------------------//
// Calls on DFSUtil, returns vector which has the path
QVector<QString> graph::DFS(stadiums start)
{
    distance = 0;
    QVector<QString> dfsPath;

    bool *visited = new bool[vNum];
    for(int i = 0; i < vNum; i++) {
        visited[i] = false;
    }

    // Call the recursive helper function
    // to print DFS traversal
    DFSUtil(start, visited, dfsPath);
    return dfsPath;
}

    // A recursive function used by DFS
void graph::DFSUtil(stadiums start, bool visited[], QVector<QString> &dfsPath)
{
    // Mark the current node as visited and
    // add to vector
    visited[start] = true;
    dfsPath.push_back(control.getStadiumName(start));

    // Returns a vector of all the adjacent stadiums from start, sorted.
    QVector<int> vec = sortStadium(static_cast<stadiums>(start));
    QVector<int>::iterator it;

    // Start the search for all adjacent stadiums from start stadium
    for(it = vec.begin(); it != vec.end(); ++it)
    {
        // If the matrix's value is > 0 and current stadium hasn't been visited
        if(matrix[start][*it] > 0 && !visited[*it])
        {
            // Update distance, call on function again, with the next shortest stadium
            distance += matrix[start][*it];
            DFSUtil(static_cast<stadiums>(*it), visited, dfsPath);
        }
    }
}

QVector<int> graph::dijkstra(stadiums start)
{
    QVector<int> dist(vNum);
    QVector<bool> sptSet(vNum);

    for(int i = 0; i < vNum; i++)
    {
        dist[i] = MAX;
        sptSet[i] = false;
    }

    dist[start] = 0;

    for(int count = 0; count < vNum - 1; count++)
    {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for(int v = 0; v < vNum; v++)
        {
            if(!sptSet[v] && matrix[u][v] && dist[u] + matrix[u][v] < dist[v])
            {
                dist[v] = dist[u] + matrix[u][v];
            }
        }
    }
    return dist;
}

int graph::minDistance(QVector<int> dist, QVector<bool> sptSet)
{
    int min = MAX;
    int minIndex = -1;

    for(int v = 0; v < vNum; v++)
    {
        if(sptSet[v] == false && dist[v] <= min)
        {
            min = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}


