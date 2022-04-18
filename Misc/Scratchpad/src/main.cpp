#include <iostream>
#include <vector>
#include <set>
#include "../include/factorial.hpp"
using vi = std::vector<int>;


int main()
{
    int n{0};
    std::cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    std::set<int> s;
    for(int num : v)
        if(!s.insert(num).second)
            std::cout << num << "\n";
    return 0;
}