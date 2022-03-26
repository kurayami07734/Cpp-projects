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

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    ll sum{0}, diff{0}, product{0}, quotient{0};
    cin >> sum >> diff >> product >> quotient;
    ll a{0}, b{0};
    a = (sum + diff) / 2;
    b = (sum - diff) / 2;
    if (product == a * b)
        cout << a << " " << b << "\n";
    else
        cout << "-1 -1\n";
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