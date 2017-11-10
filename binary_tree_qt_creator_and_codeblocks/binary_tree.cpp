#include "binary_tree.h"

struct Node {
    int value;
    Node* leftChild;
    Node* rightChild;
};

struct Tree {
    Node* root;
};

Node* findElement(Tree* tree, int value) {
    Node* temp = tree->root;
    while(temp->value != value) {
        if (value < temp->value) {
            temp = temp->leftChild;
        } else {
            temp = temp->rightChild;
        }
        if (temp == NULL) {
            break;
        }
    }
    return temp;
}

void deleteElement(Tree *tree, int value) {
    Node* temp = findElement(tree, value);
    if (temp == NULL) {
        cout << "Error! No such element";
    } else {
        Node* changingElement = temp;
        if (leftChild != NULL) {
            while(rightChild != NULL) {
                changingElement = changingElement->rightChild;;
            }
            swap(temp->value, changingElement->value);
        } else if (rightChild != NULL) {
            while(leftChild != NULL) {
                changingElement = changingElement->leftChild;;
            }
            swap(temp->value, changingElement->value);
        }
        delete changingElement;
    }
}
