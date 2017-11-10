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

bool containsNode(Node *node, int value)
{
	if (node == nullptr)
	{
		return false;
	}

	if (node->value == value)
	{
		return true;
	}

	if (value < node->value)
	{
		return containsNode(node->left, value);
	}
	else
	{
		return containsNode(node->right, value);
	}
}

bool contains(Tree *tree, int value)
{
	return containsNode(tree->root, value);
}