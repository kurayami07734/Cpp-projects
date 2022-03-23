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

int kadane(string &s)
{
    int length = 0, max_length = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] != s[i])
            length++;
        max_length = max(length, max_length);
    }
    return max_length;
}

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    string s;
    cin >> n >> s;
    cout << kadane(s) << "\n";
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