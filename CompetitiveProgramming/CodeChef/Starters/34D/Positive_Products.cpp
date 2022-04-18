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

ll nC2(ll n)
{
    return (n * (n - 1)) / 2;
}

void solve()
{
    ll i{0}, j{0}, negatives{0}, zeroes{0}, n{0}, x{0}, y{0}, z{0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < 0)
            negatives++;
        else if (x == 0)
            zeroes++;
    }
    ll t = n - zeroes - negatives;
    // if (n == negatives)
    // {
    //     cout << nC2(n) << "\n";
    //     return;
    // }
    ll ans = nC2(t) + nC2(negatives);
    cout << ans << "\n";
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