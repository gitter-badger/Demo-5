#include <iostream>
#include "hash.h"
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    HashTable* hash = makeHash();
    addElement("Hellow", hash);
    return 0;
}

