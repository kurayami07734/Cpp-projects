#include <iostream>
#include <vector>
#pragma once

int binary_search(std::vector<int> &v, int value)
{
    size_t hi{v.size() - 1}, lo{0}, mid{0};
    while (lo <= hi)
    {
        mid = (hi + lo) / 2;
        if (v.at(mid) == value)
            return mid;
        else if (v.at(mid) > value)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}

template <typename Iter, typename T>
int binarySearch(Iter start, Iter end, T value)
{
    Iter lo{start}, hi{std::prev(end)}, mid{0};
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (*mid == value)
            return std::distance(start, mid);
        else if (*mid > value)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}