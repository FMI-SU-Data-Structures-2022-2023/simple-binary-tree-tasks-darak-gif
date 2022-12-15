#include "solution.h"

int countElements(Node* tree) {

    if (!tree)
        return 0;

    return 1+countElements(tree->left)+countElements(tree->right);
}

int countLeafs(Node* tree) {
    if (!tree)
        return 0;
    if (!tree->left && !tree->right)
        return 1;
    else
        return countLeafs(tree->left) + countLeafs(tree->right);
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
