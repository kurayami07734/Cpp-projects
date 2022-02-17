#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define repi(a, b, c) for (int i = (int)a; i < (int)b, i += (int)c)
#define repd(a, b, c) for (int i = (int)a; i > (int)b; i -= (int)c)

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

int main()
{

    fastio;
    int T{0}, n{0};
    cin >> T;
    while (T--)
    {
        cin >> n;
        cout << factorial(n) << "\n";
    }
    return 0;
}