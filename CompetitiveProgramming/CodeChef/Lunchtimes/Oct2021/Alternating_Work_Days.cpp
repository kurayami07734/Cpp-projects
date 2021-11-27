#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi vector<int>
#define vd vector<double>
#define repi(i, f, c) for (int j = i; j < f, j += c)
#define repd(i, f, c) for (int j = i; j > f; j -= c)

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

int main()
{

    fastio;
    int T{0}, a, b, p, q;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> p >> q;
        if (p % a == 0 &&
            q % b == 0 &&
            (p / a == q / b || (abs(p / a - q / b) == 1)))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}