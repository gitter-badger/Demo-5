#include "binary_tree.h"

struct Node {
    int value;
    Node* leftChild;
    Node* rightChild;
};

struct Tree {
    Node* root;
};

void printTree(Tree* tree, bool isUp)
{
    printRecursive(tree->root, isUp);
}

void printRecursive(Node* root, bool isUp)
{
    if (root)
    {
        printRecursive((isUp) ? root->leftChild : root->rightChild, isUp);
        cout << root->value << " ";
        printRecursive((isUp) ? root->rightChild : root->leftChild, isUp);
    }
}
