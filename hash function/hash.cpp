#include <iostream>
#include <vector>
#include "hash.h"

using namespace std;

struct HashTable {
    vector<vector<string>> array;
};

HashTable* makeHash()
{
    HashTable* newHashTable = new HashTable{};
    newHashTable->array.reserve(25);
    return newHashTable;
}

int hashFunction(string str)
{
    int result = 0;
    int p = 3;
    for (char ch : str) {
        result = result * p + int(ch);
    }
    return result;
}

void addElement(const std::string& element, HashTable* hash)
{
    int h = hashFunction(element);
    h = h % hash->array.capacity();
    hash->array[h].push_back(element);
}

void deleteElement(const std::string& element, HashTable* hash)
{
    
}

bool search(const std::string& element, HashTable* hash)
{
    int h = hashFunction(element);
    h = h % hash->array.size();
    for (int i = 0; i < hash->array[h].size(); i++) {
        if (element == hash->array[h][i]) {
            return true;
        }
    }
    return false;
}