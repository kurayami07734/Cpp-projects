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

ll holidays(ll n)
{
    ll ans = n / 7;
    if (n % 7 == 6)
        ans++;
    return ans;
}

int main()
{
    fastio;
    ll T{0}, x{0};
    cin >> T;
    while (T--)
    {
        cin >> x;
        cout << holidays(x) << "\n";
    }
    return 0;
}