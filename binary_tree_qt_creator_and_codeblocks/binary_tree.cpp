#include "binary_tree.h"

struct Node {
    int value;
    Node* leftChild;
    Node* rightChild;
};

struct Tree {
    Node* root;
};

void push(Tree *tree, int value)
{
    auto currentPosition = tree->root;
    auto nextPosition = tree->root;
    while (nextPosition != nullptr)
    {
        currentPosition = nextPosition;

        if (value >= currentPosition->value)
        {
            nextPosition = currentPosition->rightChild;
        }
        else
        {
            nextPosition = currentPosition->leftChild;
        }
    }

    Node *newNode = new Node;
    newNode->leftChild = newNode->rightChild = nullptr;
    newNode->value = value;

    if (currentPosition == nullptr)
    {
        tree->root = newNode;
    }
    else if (nextPosition == currentPosition->rightChild)
    {
        currentPosition->rightChild = newNode;
    }
    else
    {
        currentPosition->leftChild = newNode;
    }
}
