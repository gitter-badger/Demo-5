#pragma once

struct Node;
struct Tree;

Tree *createTree();

void clearTree(Tree *tree);

void contains(Tree *tree, int value);

void add(Tree *tree, int value);

void print(Tree *tree);