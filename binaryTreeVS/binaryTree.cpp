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

void print(Node* node)
{
	if (node == nullptr)
	{
		return;
	}
	print(node->left);
	std::cout << node->value << " ";
	print(node->right);
}