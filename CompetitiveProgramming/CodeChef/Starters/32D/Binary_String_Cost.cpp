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
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int ones{0}, zeroes{0};
    for(char c : s)
    {
        if(c == '1')
            ones++;
        else if (c == '0')
            zeroes++;
    }
    if(ones > 0 && zeroes > 0)
        cout << min(x, y) << "\n";
    else
        cout << "0\n";
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