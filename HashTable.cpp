#include "HashTable.h"
#include <iostream>
using namespace std;

HashTable::HashTable() {
    table.resize(TABLE_SIZE);
}

int HashTable::hash(const string& key) {
    int hashValue = 0;
    for (char c : key) {
        hashValue += c;
    }
    return hashValue % TABLE_SIZE;
}

void HashTable::insert(const std::string& key) {
    int index = hash(key);
    table[index].push_back(key);
}

list<string> HashTable::autoComplete(const string& prefix) {
    list<string> result;
    for (const auto& bucket : table) {
        for (const auto& word : bucket) {
            if (word.find(prefix) == 0) {
                result.push_back(word);
            }
        }
    }
    return result;
}