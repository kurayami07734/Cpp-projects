#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#pragma once

int maxSubarraySum(std::vector<int> &v) {
    int max_sum = v.at(0), sum = v.at(0);
    for (int num : v) {
        sum = std::max(num, num + sum);
        max_sum = std::max(max_sum, sum);
    }
    return max_sum;
}

int maxProduct(std::vector<int> &nums) {
    //! doesn't work
    using namespace std;
    int max_product = nums.at(0), product = max_product;

    for (int i = 1; i < nums.size(); i++) {
        product = max(nums.at(i), product * nums.at(i));
        max_product = max(product, max_product);
    }
    return max_product;
}
