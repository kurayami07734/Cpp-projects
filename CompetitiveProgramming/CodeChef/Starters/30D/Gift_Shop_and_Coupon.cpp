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

// yay this got accepted !!!

ll sum(vll &v)
{
    ll ans = 0;
    for(ll num : v)
        ans += num;
    return ans;
}

ll gifts(vll &v, ll k)
{
    sort(all(v));
    ll cost = sum(v);
    while(v.size() > 0)
    {
        if(cost <= k)
            return v.size();
        else
        {
            cost -= v.back() / 2;
            if(cost <= k)
                return v.size();
            else
            {
                cost += v.back() / 2; // nullifying the effect of using the coupon
                cost -= v.back();
                v.pop_back();
            }
        }
    }
    return 0;
}

int main()
{
    fastio;
    ll T{0}, n{0}, k{0};
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        vll v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cout << gifts(v, k) << "\n";
    }
    return 0;
}