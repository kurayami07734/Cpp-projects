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

bool isEven(vll &v)
{
    for (ll num : v)
        if (num % 2 != 0)
            return false;
    return true;
}
bool isOdd(vll &v)
{
    for (ll num : v)
        if (num % 2 == 0)
            return false;
    return true;
}

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    cin >> n;
    vll v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if(isOdd(v) || isEven(v))
                break;
            if ((v[i] + v[j]) % 2 == 0)
            {
                v.push_back(v[i] + v[j]);
                v.erase(v.begin() + i);
                v.erase(v.begin() + j);
                i = 0;
                k++;
            }
        }
    }
    cout << k << "\n";
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