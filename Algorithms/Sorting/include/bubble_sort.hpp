#include <iostream>
#include <vector>
#pragma once

void bubble_sort(std::vector<int> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = 0; j + i < v.size() - 1; j++)
            if (v.at(j) > v.at(j + 1)) std::swap(v.at(j), v.at(j + 1));
    }
}

void optimized_bubble_sort(std::vector<int> &v) {
    bool swapped{false};
    for (size_t i = 0; i < v.size(); i++) {
        swapped = false;
        for (size_t j = 0; j + i < v.size() - 1; j++)
            if (v.at(j) > v.at(j + 1)) {
                std::swap(v.at(j), v.at(j + 1));
                swapped = true;
            }
        if (swapped == false) break;
    }
}

template <typename ForwardIterator>
void optimized_bubble_sort(ForwardIterator begin, ForwardIterator end) {
    bool swapped{false};
    for (auto i = begin; i != end; ++i) {
        for (auto j = begin; j < i; ++j) {
            if (*i > *j) {
                std::swap(*j, *(j + 1));
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}