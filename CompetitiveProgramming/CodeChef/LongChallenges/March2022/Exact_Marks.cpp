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

ll marks(ll a, ll b, ll c)
{
    return (3 * a - b);
}

void solve()
{
    ll n{0}, x{0};
    cin >> n >> x;
    ll a{n}, b{0}, c{0};
    for (ll i = 1; i <= n; i++)
    {
        if (marks(a, b, c) == x)
        {
            cout << "YES \n"
                 << a << " " << b << " " << c << "\n";
            return;
        }
        else
        {
            a--;
            if (i % 2 == 0)
                b++;
            else
                c++;
        }
    }
    cout << "NO\n";
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