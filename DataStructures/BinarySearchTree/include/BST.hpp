#ifndef BST_HPP
#define BST_HPP
#include <iostream>
#include <vector>
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
    BSTNode *root;

public:
    BinarySearchTree()
        : root(nullptr)
    {
    }
    void insert(int value);
    void insert(std::vector<int> &v);
    void display_BFS();
    // Depth-first search based display functions
    void display_pre_order();
    void display_post_order();
    void display_in_order();
    BSTNode* find(int key);
    int max();
    int min();
};

#endif // BST_HPP