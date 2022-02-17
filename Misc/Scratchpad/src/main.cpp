#include <iostream>
#include <vector>
#include "../include/factorial.hpp"
using vi = std::vector<int>;

int time_taken(vi &h)
{
    int time = 0;
    for (int i = 0; i < h.size(); i++)
    {
        if (i == 0)
            time += (h[i] + 1);
        else if(h[i] > h[i-1])
        {
            time++; // jump time
            time += (h[i] - h[i - 1] + 1);
        }
        else 
        {
            time += (h[i] - h[i - 1]); // down to level of next tree
            time += 2; // jumping and eating time
        }
    }
    return time;
}

int main()
{
	std::cout << time_taken(vi({1,6,1}));
	return 0;
}