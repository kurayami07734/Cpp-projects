#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define vll std::vector<ll>

int main()
{
    fastio;
    int T{0}, n{0}, m{0};
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        cout << (n * 2 + m * 4) << "\n";
    }
    return 0;
}