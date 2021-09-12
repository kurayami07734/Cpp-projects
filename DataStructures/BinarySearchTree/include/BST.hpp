#ifndef BST_HPP
#define BST_HPP
#include <iostream>

struct BSTNode
{
public:
    int data;
    BSTNode *left, *right;
    BSTNode(int value, BSTNode *left = nullptr, BSTNode *right = nullptr)
    {
        this->left = left;
        this->right = right;
        data = value;
    }
};

class BinarySearchTree
{
private:
    BSTNode *root = nullptr;

public:
    BinarySearchTree()
        : root(nullptr)
    {
    }
    void insert(int value);
    void display_BFS();
    BSTNode* find(int key);
    int max();
    int min();
};

#endif // BST_HPP