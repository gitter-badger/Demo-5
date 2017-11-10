#include "binary_tree.h"

struct Node {
    int value;
    Node* leftChild;
    Node* rightChild;
};

struct Tree {
    Node* root;
};

void printTree(Tree *tree, bool isUp)
{

}

void printRecursive(Node* root, bool isUp)
{
    if (isUp)
    {
        printRecursive(root->leftChild);
        if ()
    }
}
