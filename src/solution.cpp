#include "solution.h"
#include<iostream>
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
    if (!tree)
        return 0;

    return 1 + std::max(height(tree->left),height(tree->right));
}

int sumElements(Node* tree) {
    if (!tree)
        return 0;

    return tree->key + sumElements(tree->left) + sumElements(tree->right);

}

int sumElementsAtLevel(Node* tree, unsigned level) {
    if (!tree)
        return 0;

    if (!level)
        return tree->key;

    return sumElementsAtLevel(tree->left, level - 1) + sumElementsAtLevel(tree->right, level - 1);
}

bool helperSymmetric(Node* leftTree, Node* rightTree) {
    if (!leftTree && !rightTree)
        return true;
    if (!leftTree || !rightTree)
        return false;

    if (leftTree->key == rightTree->key)
        return helperSymmetric(leftTree->left, rightTree->right)
            && helperSymmetric(leftTree->right, rightTree->left);

    return false;
}

bool isSymmetric(Node* tree) {
    if (!tree)
        return true;

    if (!tree->left && !tree->right)
        return true;

    return helperSymmetric(tree->left, tree->right);
}

int maxValue(Node* tree) {

    if (!tree)
        return INT16_MIN;

    int value = tree->key;
    int maxLeft = maxValue(tree->left);
    int maxRight = maxValue(tree->right);

    return std::max(value, std::max(maxLeft, maxRight));

}

int minValue(Node* tree) {

    if (!tree)
        return INT16_MAX;

    int value = tree->key;
    int minLeft = minValue(tree->left);
    int minRight = minValue(tree->right);

    return std::min(value, std::min(minLeft, minRight));

}

bool isBST(Node* tree) {
    
    if (!tree || !tree->left && !tree->right)
        return true;

    if (tree->left && maxValue(tree->left) >= tree->key)
        return false;

    if (tree->right && minValue(tree->right) < tree->key)
        return false;

     return true;

}
