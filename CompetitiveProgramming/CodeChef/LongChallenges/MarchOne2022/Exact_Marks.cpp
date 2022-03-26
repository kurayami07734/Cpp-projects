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

// ! didn't get accepted :(

void solve()
{
    ll n{0}, x{0};
    cin >> n >> x;
    ll a{0}, b{0}, c{0};
    if (x % 3 == 0)
    {
        a = x / 3;
        b = 0;
        c = n - a - b;
    }
    else if ((x + 1) % 3 == 0)
    {
        a = (x + 1) / 3;
        b = 1;
        c = n - a - b;
    }
    else
    {
        a = (x + 2) / 3;
        b = 2;
        c = n - a - b;
    }

    if (a + b > n)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n"
             << a << " " << b << " " << c << "\n";
    }
}

int main()
{
    fastio;
    int T{0};
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}