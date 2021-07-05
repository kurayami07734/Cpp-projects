#include <iostream>
#include <vector>
#pragma once


void insertion_sort(std::vector<int> &v)
{
    for (size_t i = 1; i < v.size(); i++)
    {
        int current_val = v.at(i), j{0};
        for (j = i - 1; j >= 0 && v.at(j) > current_val; j--)
            v.at(j + 1) = v.at(j);
        v.at(j + 1) = current_val;
    }
}