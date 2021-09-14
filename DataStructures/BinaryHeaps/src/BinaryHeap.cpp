#include "../include/BinaryHeap.hpp"
#include <iostream>

void MaxBinaryHeap::display()
{
    for (int i : v)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
}

void MaxBinaryHeap::insert(int value)
{
    v.push_back(value);
    if (v.size() == 1)
        return;
    else
    {
        int child_index = v.size() - 1;
        int parent_index = (child_index - 1) / 2;
        while (v.at(parent_index) < v.at(child_index))
        {
            std::swap(v.at(parent_index), v.at(child_index));
            child_index = parent_index;
            parent_index = (child_index - 1) / 2;
        }
    }
}
void MaxBinaryHeap::insert(std::vector<int> &vec)
{
    for (int val : vec)
    {
        insert(val);
    }
}

int MaxBinaryHeap::extract_max()
{
    int max = v.at(0);
    v.at(0) = v.at(v.size() - 1);
    int parent = 0;
    int l_child = 2 * parent + 1;
    int r_child = 2 * parent + 2;
    int max_child = v.at(l_child) > v.at(r_child) ? l_child : r_child;
    while (v.at(parent) < v.at(max_child))
    {
        std::swap(v.at(parent), v.at(max_child));
        parent = max_child;
        if (2 * parent + 1 < v.size())
            l_child = 2 * parent + 1;
        else
            break;
        if (2 * parent + 2 < v.size())
            r_child = 2 * parent + 2;
        max_child = v.at(l_child) > v.at(r_child) ? l_child : r_child;
    }
    v.pop_back();
    return max;
}