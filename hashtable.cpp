#include"hashtable.h"

Hash::Hash()
{
    this->BUCKET = 2;
    table = new QList<QString>[BUCKET];
}

void Hash::insertItem(QString user,int key)
{
    int index = hashFunction(key);
    table[index].push_back(user);
}

bool Hash::foundpass(QString user)
{
    for(int i = 0; i < BUCKET;i++)
    {
        for(int j = 0; j < table->count();j++)
        {
            if(user == table[i][j])
            {
                return true;
            }
        }
    }
    return false;
}
int Hash::findkey(QString user)
{
    for(int i = 0; i < BUCKET;i++)
    {
        for(int j = 0; j < table->count();j++)
        {
            if(user == table[i][j])
            {
                return i;
            }
        }
    }
    return -1;
}
