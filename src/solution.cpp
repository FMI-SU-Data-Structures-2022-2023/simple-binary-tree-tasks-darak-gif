#include "solution.h"

int countElements(Node* tree) {

    if (!tree)
        return 0;

    return 1+countElements(tree->left)+countElements(tree->right);
}

int countLeafs(Node* tree) {
    return -1;
}

int height(Node* tree) {
    return -1;
}

int sumElements(Node* tree) {
    return -1;
}

int sumElementsAtLevel(Node* tree, unsigned level) {
    return -1;
}

bool isSymmetric(Node* tree) {
    return false;
}

bool isBST(Node* tree) {
    return false;
}
