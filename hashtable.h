#include "team.h"

class Hash
{
    int BUCKET;    // No. of buckets

    // Pointer to an array containing buckets
    QList<QString> *table;
public:
    Hash();  // Constructor

    // inserts a key into hash table
    void insertItem(QString user,int x);

    // hash function to map values to key
    int hashFunction(int x) {
        return (x % BUCKET);
    }

    bool foundpass(QString user);
    int findkey(QString user);
};
