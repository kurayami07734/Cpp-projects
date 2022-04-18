#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
using vi = std::vector<int>;
using vd = std::vector<double>;
using vll = std::vector<ll>;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define all(x) x.begin(), x.end()

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    cin >> x >> y;
    if (x % 2 != 0 || y % 2 != 0)
        cout << "-1\n";
    else
    {
        string s1, s2;
        n = (x + y) / 2;
        x /= 2;
        y /= 2;
        
        s1 += s1;
        s2 += s2;
        cout << s1 << "\n"
             << s2 << "\n";
    }
}
int main()
{
    fastio;
    int T{0};
    cin >> T;
    // cin >> n;
    while (T--)
    {
        solve();
    }
    return 0;
}