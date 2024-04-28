#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <vector>
#include <list>
#include <string>
using namespace std;

class HashTable {
private:
    static const int TABLE_SIZE = 100;
    vector<list<string>> table;

    int hash(const string& key);

public:
    HashTable();
    void insert(const string& key);
    list<string> autoComplete(const string& prefix);
};

#endif // HASHTABLE_H
