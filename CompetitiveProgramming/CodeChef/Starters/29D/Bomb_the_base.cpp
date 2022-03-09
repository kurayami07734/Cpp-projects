#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define vll std::vector<ll>

ll max_destroyed(vll &v, ll n, ll x)
{
    ll max_index = 0;
    for (ll i = 0; i < n; i++)
    {
        if(v[i] < x)
            max_index = max(i+1, max_index);
    }
    return max_index;
}

int main()
{
    // ! didn't get accepted :(
    fastio;
    ll T{0}, n{0}, x{0};
    cin >> T;
    while (T--)
    {
        cin >> n >> x;
        vll v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        cout << max_destroyed(v, n, x) << "\n";
    }
    return 0;
}