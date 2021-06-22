#include <iostream>
#include <cmath>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
const ull MOD = 1e9 + 7;
ull power(ull a, ull b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    if (b % 2 == 0)
    {
        ull ans = power(a, b / 2);
        return (ans * ans) % MOD;
    }
    else
    {
        ull ans = power(a, (b - 1) / 2);
        return (((a * ans) % MOD) * ans) % MOD;
    }
}
ull possible_bit_strings(ull num)
{
    return power(2, num);
}

int main()
{
    using namespace std;
    fastio;
    ull N{0};
    cin >> N;
    cout << possible_bit_strings(N);
    return 0;
}