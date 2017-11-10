#pragma once

struct Node;
struct Tree;

Tree *createTree();
void clearTree(Tree *tree);

bool contains(Tree *tree, int value);
bool add(Tree *tree, int value);
bool remove(Tree *tree, int value);

void print(Tree *tree);