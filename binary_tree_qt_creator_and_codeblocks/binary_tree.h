struct Node;

struct Tree;

Tree *makeTree();
void push(Tree *tree, int value);
void search(Tree *tree, int value);
void deleteElement(Tree *tree, int value);
void deleteTree(Tree* tree);
bool isEmpty(Tree* tree);
void printTree(Tree* tree, bool isUp = true);
