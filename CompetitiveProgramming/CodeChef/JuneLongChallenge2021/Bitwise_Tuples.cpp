#include <iostream>
#include <cmath>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

using ull = unsigned long long;
const ull MOD = 1e9 + 7;
//solved after contest is over

// Summary of Editorial
// Reframed Q - find all N-tuples of M bits long such bitwise and of all is 0

// i.e, find N numbers having M bits and bitwise AND = 0
// 1: _ _ _ _ _ ... _   <- M bits
// 2: _ _ _ _ _ ... _   <- M bits
// .
// .
// .
// N: _ _ _ _ _ ... _   <- M bits

// The kth bit of Above numbers' bitwise & will only be only if all are ones in the kth column
// therefore, no. of allowed tuples = 2^N - 1 for any column
// therefore, total no. of allowed tuples = (2^N - 1)^M

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

ull num_of_tuples(int n, int k)
{
    ull count{0};
    ull base = power(2, n) - 1;
    count = power(base, k);
    return count;
}

int main()
{
    using namespace std;
    fastio;
    ull T{0}, a{0}, b{0};
    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        cout << num_of_tuples(a, b) << "\n";
    }
    return 0;
}