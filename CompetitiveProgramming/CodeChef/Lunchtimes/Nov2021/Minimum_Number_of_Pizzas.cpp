#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
#include <numeric>

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi vector<int>
#define vd vector<double>
#define repi(i, f, c) for (int j = i; j < f, j += c)
#define repd(i, f, c) for (int j = i; j > f; j -= c)

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

void min_pizzas(int n, int k)
{
    cout << lcm(n, k) / k << "\n";
}

int main()
{

    fastio;
    int T{0}, n, k;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        min_pizzas(n, k);
    }
    return 0;
}