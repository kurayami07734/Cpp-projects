#pragma once
#include <iostream>
#include <vector>

size_t pivot(size_t start, size_t end)
{
    
}

void quicksort(std::vector<int> &v)
{
    size_t pivot_index = pivot(0, v.size() - 1);
    pivot(0, pivot_index - 1);
    pivot(pivot_index, v.size() - 1);
}