#i#include <iostream>
#include "binaryTree.h"
using namespace std;

int main()
{
	BinarySearchTree *tree = createTree();
	add(tree, 4);
	add(tree, 8);
	add(tree, 3);
	add(tree, 1);
	print(tree);

	remove(tree, 4);
	print(tree);
	return 0;
}