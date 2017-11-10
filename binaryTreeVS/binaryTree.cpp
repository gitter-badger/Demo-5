#include <iostream>
#include "binaryTree.h"

struct Node {
	int value;
	Node *left;
	Node *right;
};

struct Tree {
	Node *root;
};

void clearNode(Node *node)
{
    if (node == nullptr)
        return;

    clearNode(node->left);
    clearNode(node->right);
    delete node;
}

void clearTree(BTree *tree)
{
    clearNode(tree->root);
    tree->root = nullptr;
}