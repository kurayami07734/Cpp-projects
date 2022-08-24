#include <iostream>
#pragma once

template <typename Iter>
void merge(Iter start, Iter mid, Iter end) {
    std::vector<typename Iter::value_type> temp;
    temp.reserve(std::distance(start, end));
    Iter left{start}, right{mid};
    while (left != mid && right != end) {
        if (*right > *left) {
            temp.push_back(*left);
            left++;
        } else {
            temp.push_back(*right);
            right++;
        }
    }
    temp.insert(temp.end(), left, mid);
    temp.insert(temp.end(), right, end);
    std::move(temp.begin(), temp.end(), start);
}

template <typename Iter>
void merge_sort(Iter start, Iter end) {
    int size = std::distance(start, end);
    if (size <= 1) {
        return;
    }
    auto mid = std::next(start, size / 2);
    merge_sort(start, mid);
    merge_sort(mid, end);
    merge(start, mid, end);
}