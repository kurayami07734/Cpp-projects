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

bool isConsecutive(ll a, ll b, ll c)
{
    vll v(3);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    sort(all(v));
    return (abs(v[0] - v[1]) == 1 && abs(v[1] - v[2]) == 1 && abs(v[0] - v[2]) == 2);
}

void solve()
{
    ll a{0}, b{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    cin >> n >> a >> b;
    // if(abs(a-b) == 1 && max(a,b) < n)
    // {
    for (int i = 1; i <= n; i++)
    {
        if (isConsecutive(i, a, b))
            k++;
    }
    cout << k << "\n";
    // }
    // else
    //     cout << "0\n";
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