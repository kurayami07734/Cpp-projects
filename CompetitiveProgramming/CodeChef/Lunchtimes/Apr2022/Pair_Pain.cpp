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

ll nC2(ll a)
{
    return (a * (a - 1)) / 2;
}

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    cin >> n;
    vll v(n);
    bool added{false};
    ll ones{0}, twos{0}, ans{0}, rest{0};
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            ones++;
        else if (v[i] == 2)
            twos++;
        else
            rest++;
    }
    if (ones > 0)
        ans += nC2(rest + twos);
    if (ones > 1)
        ans += nC2(ones);
    if (twos > 1)
        ans += nC2(twos);

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