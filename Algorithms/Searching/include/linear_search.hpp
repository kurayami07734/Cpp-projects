#include <iostream>
#include <vector>
#pragma once

int linear_search(std::vector<int> &v, int value) {
    // ! not working for not in array case
    for (size_t i = 0; i < v.size(); i++) {
        if (v.at(i) == value) return i;
    }
    return -1;
}

template <typename Iter, typename T>
int linear_search(Iter start, Iter end, T value) {
    int index{0};
    for (Iter i = start; i != end; ++i) {
        if (*i == value) return index;
        index++;
    }
    return -1;
}
