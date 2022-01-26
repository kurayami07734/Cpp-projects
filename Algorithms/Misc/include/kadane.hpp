#include <iostream>
#include <vector>
#include <algorithm>
#pragma once

int maxSubarraySum(std::vector<int> &v)
{
    int max_sum = v.at(0), sum = v.at(0);
    for(int num : v)
    {
        sum = std::max(num, num + sum);
        max_sum = std::max(max_sum, sum);
    }
    return max_sum;
}
