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

ll altsum(vll &v)
{
    ll ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
            ans += abs(v[i]);
        else
            ans -= abs(v[i]);
    }
    return ans;
}

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    cin >> n;
    vll v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll initial = altsum(v);
    ll max = 0, min = 0;
    for (int i = 0; i < n; i += 2)
        max = std::max(v[i], max);
    for (int i = 1; i < n; i += 2)
        min = std::min(v[i], min);
    if (max >= min)
        initial += 2 * (max - abs(min));
    cout << initial << "\n";
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