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
    ll a{0}, b{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    cin >> x >> y >> a >> b;
    if (x == a && y == b)
        cout << "0\n";
    else if (x == b && y == a)
        cout << "0\n";
    else if (x != a && y != b && x != b && y != a)
        cout << "2\n";
    else if (x != a && x != b)
        cout << "1\n";
    else if (y != a && y != b)
        cout << "1\n";
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