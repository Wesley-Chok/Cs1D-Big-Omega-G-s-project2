#ifndef GRAPH_H
#define GRAPH_H

#include <QObject>
#include "controller.h"

class graph : public QObject
{
    Q_OBJECT
public:

    /** \fn Constructor
     * @param QObject *parent
     */
    graph(QObject *parent = nullptr);

    /** \fn addEdges()
     * This function will add edges to the graph through an adjacency matrix. A two dimensional array
     * for loop will be used to account for the rows and columns
     * @param no formal parameters
     * @return nothing returned
     */
    void addEdges();

    /** \fn getDistance()
     * This function will return the stadium distances
     * @param no formal parameters
     * @return int distance
     */
    int getDistance();

    //MST
    /** \fn primMst()
     * This function will find the minimum spanning tree of the graph using the prim's spanning tree method.
     * The parent array will store the constructed minimum spanning tree, the key array will store the key
     * values used for the weight edges and the mstSet array will store the vertices not included in the
     * minimum spanning tree. The mst will be returned at the end
     * @param no formal parameters
     * @return QVector<QString> mst
     */
    QVector<QString> primMst();

    //BFS
    /** \fn bfsTraversal()
     * This function will find the breadth first search for the graph. The visited vector will determine
     * if the stadium has been visited. If the adjacent has not been visited, then it will be marked as visited
     * and loop. The bfs will be returned at the end
     * @param no formal parameters
     * @return QVector<QString> trav
     */
    QVector<QString> bfsTraversal(stadiums start);

    //DFS
    /** \fn DFS()
     * This function will find the depth first search for the graph. The function first marks all of the
     * vertices as not visited and then calls the function DFSUtil() recursively to determine the dfs. The dfs
     * will be returned at the end
     * @param no formal parameters
     * @return QVector<QString> dfsPath
     */
    QVector<QString> DFS(stadiums start);

    //Dijkstra's

    /** \fn dijkstra()
     * This function will find dijkstra's shortest path. The dist vector holds the shortest distance from
     * stadium a to stadium b and the sptSet vector will determine if vertex a is included into the
     * path tree. It will return dist at the end of the function.
     * @param stadiums start
     * @return QVector<int> dist
     */
    QVector<int> dijkstra(stadiums start);

    /** \fn minDistance()
     * This function will find the vertex with the minimum distance value. The set of vertices will be from
     * the vertices that are not included in the shortest path tree yet. It will return min_index at the end
     * of the function
     * @param QVector<int> dist
     * @param QVector<bool> sptSet
     * @return QVector<int> dist
     */
    int minDistance(QVector<int> dist, QVector<bool> sptSet);

signals:
private:
    int distance;
    Controller control;
    int vNum;
    int** matrix;

    //MST
    /** \fn minKey()
     * This function will find the vertex with the minimum key value. It will use the values from
     * the vertices that are not included in the minimum spanning tree
     * @param int key[]
     * @param bool mstSet[]
     * @return int min_index
     */
    int minKey(QVector<int> key, QVector<bool> mstSet);

    /** \fn printMst()
     * This function will print out the constructed minimum spanning tree for the graph. The mst will be stored
     * in a vector and will go through a for loop. It will return the mst at the end of the function.
     * @param QVector<int> parent
     * @return QVector<QString> mst
     */
    QVector<QString> printMst(QVector<int> parent);

    //BFS
    /** \fn sortStadium()
     * This function will sort the stadiums for the function bfsTraversal(). If the distance between stadium
     * A is greater than stadium B, then it will sort
     * @param stadiums v
     * @return QVector<int> vec
     */
    QVector<int> sortStadium(stadiums v);

    //DFS
    /** \fn DFSUtil()
     * This function will recursively find the dfs of the graph. The current node will be marked as visited
     * and added to the vector. It will then begin searching for all of the adjacent stadiums from the
     * starting stadium
     * @param stadiums start
     * @param bool visited[]
     * @param QVector<QString> &dfsPath
     * @return nothing returned
     */
    void DFSUtil(stadiums start, bool visited[], QVector<QString> &dfsPath);
};

#endif // GRAPH_H
