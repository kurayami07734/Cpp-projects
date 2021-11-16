#include <iostream>
#include <cmath>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

ull non_zero_digits(ull n)
{
    ull count = 0;
    while (n > 0)
    {
        if (n % 10 != 0)
            count++;
        n /= 10;
    }
    return count;
}

void hokage_numbers(ull n)
{
    std::cout << non_zero_digits(n) << "\n";
    // if(n % 10 != 0)
    //     std::cout << n % 10 << " ";
    // else
    //     std::cout << "10 ";
    // for (ull i = 10; i < n; i *= 10)
    // {
    //     std::cout << (n & i) * i << " ";
    // }
    // std::cout << "\n";
    std::vector<ull> v;
    if (n == 10)
    {
        std::cout << "10\n";
        return;
    }
    while (n > 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    for (ull i = 0; i < v.size(); i++)
    {
        if (v.at(i) != 0)
            std::cout << v.at(i) * pow(10, i) << " ";
        else
            std::cout << pow(10, i) << " ";
    }
    std::cout << "\n";
}

int main()
{
    using namespace std;
    fastio;
    ull T{0}, n{0};
    cin >> T;
    while (T--)
    {
        cin >> n;
        hokage_numbers(n);
    }
    return 0;
}