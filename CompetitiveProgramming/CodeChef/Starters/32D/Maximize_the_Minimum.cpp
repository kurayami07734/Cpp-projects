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

ll vmax(vll &v)
{
    ll best = v[0];
    for (auto num : v)
        best = max(num, best);
    return best;
}
ll vmin(vll &v)
{
    ll worst = v[0];
    for (auto num : v)
        worst = min(worst, num);
    return worst;
}

ll count(vll &v, ll target)
{
    ll count = 0;
    for (auto num : v)
        if (target == num)
            count++;
    return count;
}

ll maxOf3(ll a, ll b, ll c)
{
    return max(max(a, b), max(a, c));
}

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    cin >> n >> k;
    vll v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    if (k < n)
        cout << v[k] << "\n";
    else
        cout << v.back() << "\n";
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