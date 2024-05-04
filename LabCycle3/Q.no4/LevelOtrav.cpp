#include "LevelOtrav.h"
#include <iostream>
#include <queue>

TreeNode::TreeNode(int val) : data(val), left(NULL), right(NULL) {}
BinaryTree::BinaryTree() : root(NULL) {}
BinaryTree::~BinaryTree() {
    // Implement destructor to free allocated memory
}

void BinaryTree::insert(int val) {
    // Implement insertion logic
}

void BinaryTree::levelOrderTraversal() {
    if (root == NULL) {
        return;
    }

    std::queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        std::cout << current->data << " ";
        if (current->left) {
            q.push(current->left);
        }
        if (current->right) {
            q.push(current->right);
        }
    }
}

