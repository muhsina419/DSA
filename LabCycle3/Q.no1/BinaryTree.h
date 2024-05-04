#include <iostream>

using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(T val) : data(val), left(NULL), right(NULL) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

template <typename T>
class BinaryTree {
private:
    TreeNode<T>* root;

    void destroyTree(TreeNode<T>* node);
    void preOrderTraversal(TreeNode<T>* node);
    void inOrderTraversal(TreeNode<T>* node);
    void postOrderTraversal(TreeNode<T>* node);

public:
    BinaryTree();
    ~BinaryTree();

    void insertNode(T val);
    void preOrder();
    void inOrder();
    void postOrder();
};

