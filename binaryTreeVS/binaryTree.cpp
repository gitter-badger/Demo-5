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

Tree *createTree()
{
	Tree *tmp = new Tree;
	tmp->root = nullptr;
	return tmp;
}

void addElement(Node *&current, int value)
{
	Node *tmp = new Node{ value, nullptr, nullptr };
	if (current == nullptr) {
		current = tmp;
	} else {
		if (value < current->value) {
			if (current->left != nullptr) {
				addElement(current->left, value);
			} else {
				current->left = tmp;
			}
		} else {
			if (current->right != nullptr) {
				addElement(current->right, value);
			} else {
				current->right = tmp;
			}
		}
	}
}

void add(Tree *tree, int value)
{
	addElement(tree->root, value);
}