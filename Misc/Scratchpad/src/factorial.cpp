#include "../include/factorial.hpp"
#include <iostream>

size_t factorial(size_t x)
{
    if(x == 0 || x == 1)
        return 1;
    else
    {
        size_t ans = 1;
        for (size_t i = 1; i < x; i++)
            ans *= i;
        return ans;
    }
}