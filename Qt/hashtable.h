#include "team.h"

class Hash
{
    int BUCKET;    // No. of buckets

    // Pointer to an array containing buckets
    QList<QString> *table;
public:
    /** \fn Constructor
     * @param QObject *parent
     */
    Hash();  // Constructor

    // inserts a key into hash table

    /** \fn insertItem()
     * This function will insert a key to the hashtable using int index and table[].
     * @param QString user
     * @param int x
     * @return nothing returned
     */
    void insertItem(QString user,int x);

    // hash function to map values to key
    /** \fn insertItem()
     * This function will construct and map the values to the keys.
     * @param int x
     * @return nothing returned
     */
    int hashFunction(int x) {
        return (x % BUCKET);
    }

    /** \fn insertItem()
     * This function will find the pass for the hashtable and will return boolean false value at the end
     * of the function
     * @param QString user
     * @return bool false
     */
    bool foundpass(QString user);

    /** \fn insertItem()
     * This function will find the key for the hastable and will return -1 at the end of the function.
     * @param QString user
     * @return -1
     */
    int findkey(QString user);
};
