#pragma once
#include <string>

struct HashTable;

HashTable* makeHash();

void addElement(const std::string& element, HashTable* hash);

void deleteElement(const std::string& element, HashTable* hash);

bool search(const std::string& element, HashTable* hash);






