#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

class Hashing
{
    vector<list<int>> hashTable;
    int buckets;

public:
    Hashing(int size)
    {
        buckets = size;
        hashTable.resize(buckets);
    }

    int hashValue(int key)
    {
        return key % buckets;
    }

    void insertKey(int key)
    {
        int index = hashValue(key);
        hashTable[index].push_back(key);
    }

    list<int>::iterator searchKey(int key)
    {
        int index = hashValue(key);
        return find(hashTable[index].begin(), hashTable[index].end(), key);
    }

    void deleteKey(int key)
    {
        int index = hashValue(key);
        list<int>::iterator it = searchKey(key);
        if (it != hashTable[index].end())
        {
            hashTable[index].erase(it);
        }
        else
        {
            cout << "Key not present" << endl;
        }
    }
};

int main()
{

    return 0;
}