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
    ll d{0}, j{0}, k{0}, m{0}, x{0}, y{0}, z{0};
    cin >> d;
    string n;
    cin >> n;
    ll zeroes{0}, fives{0};
    for (char c : n)
    {
        if (c == '0')
            zeroes++;
        else if (c == '5')
            fives++;
    }
    if (zeroes >= 1 or fives >= 1)
        cout << "Yes\n";
    else
        cout << "No\n";
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