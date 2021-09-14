#include <iostream>
#include <queue>
#include "../include/BST.hpp"

void BinarySearchTree::insert(int value)
{
    BSTNode *new_leaf = new BSTNode(value);
    if (root == nullptr)
    {
        root = new_leaf;
        return;
    }
    BSTNode *ptr = root;
    while (ptr != nullptr)
    {
        if (ptr->data < new_leaf->data)
        {
            if (ptr->right != nullptr)
            {
                ptr = ptr->right;
            }
            else
            {
                ptr->right = new_leaf;
                return;
            }
        }
        else
        {
            if (ptr->left != nullptr)
            {
                ptr = ptr->left;
            }
            else
            {
                ptr->left = new_leaf;
                return;
            }
        }
    }
}

void BinarySearchTree::insert(std::vector<int> &v)
{
    for(int val : v)
        insert(val);
}

void BinarySearchTree::display_BFS()
{
    //breadth-first search from left to right
    std::queue<int> q;
    q.push(root->data);
    BSTNode *ptr = root;
    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
        if (ptr->left != nullptr)
            q.push(ptr->left->data);
        if (ptr->right != nullptr)
            q.push(ptr->right->data);
        ptr = find(q.front());
    }
    std::cout << "\n";
}

void traverse_pre_order(BSTNode *node)
{
    std::cout << node->data << " ";
    if (node->left != nullptr)
        traverse_pre_order(node->left);
    if (node->right != nullptr)
        traverse_pre_order(node->right);
}

void traverse_post_order(BSTNode *node)
{
    if (node->left != nullptr)
        traverse_post_order(node->left);
    if (node->right != nullptr)
        traverse_post_order(node->right);
    std::cout << node->data << " ";
}

void BinarySearchTree::display_pre_order()
{
    traverse_pre_order(root);
    std::cout << "\n";
}

void BinarySearchTree::display_post_order()
{
    traverse_post_order(root);
    std::cout << "\n";
}
void traverse_in_order(BSTNode *node)
{
    if (node->left != nullptr)
        traverse_in_order(node->left);
    std::cout << node->data << " ";
    if (node->right != nullptr)
        traverse_in_order(node->right);
}
void BinarySearchTree::display_in_order()
{
    //creates the corresponding sorted array
    traverse_in_order(root);
    std::cout << "\n";
}
BSTNode *BinarySearchTree::find(int key)
{
    BSTNode *ptr = root;
    while (ptr != nullptr)
    {
        if (ptr->data == key)
            return ptr;
        else if (ptr->data > key)
            ptr = ptr->left;
        else
            ptr = ptr->right;
    }
    return nullptr;
}

int BinarySearchTree::min()
{
    BSTNode *ptr = root->left;
    int min = root->data;
    while (ptr != nullptr)
    {
        if (min > ptr->data)
            min = ptr->data;
        ptr = ptr->left;
    }
    return min;
}

int BinarySearchTree::max()
{
    BSTNode *ptr = root->right;
    int max = root->data;
    while (ptr != nullptr)
    {
        if (max < ptr->data)
            max = ptr->data;
        ptr = ptr->right;
    }
    return max;
}