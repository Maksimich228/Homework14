#include "HashTable.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    HashTable hashTable;
    hashTable.insert("apple");
    hashTable.insert("banana");
    hashTable.insert("orange");
    hashTable.insert("god");
    hashTable.insert("candy");
    hashTable.insert("kitchen");

    while (true) {
       cout << "Enter a prefix for auto-completion (to exit, enter 'exit'): ";
        string prefix;
        cin >> prefix;

        if (prefix == "exit") {
            break;
        }

        list<std::string> result = hashTable.autoComplete(prefix);
        if (!result.empty()) {
            cout << "Auto-completions for prefix '" << prefix << "':" << endl;
            for (const auto& word : result) {
                cout << word << std::endl;
            }
        }
        else {
            cout << "No auto-completions found for prefix '" << prefix << "'" << endl;
        }
    }

    return 0;
}