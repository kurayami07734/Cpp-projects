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

void indices(vll &v, ll x)
{
    vll pair;
    for (ll i = 0; i < v.size(); i++)
    {
        for (ll j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == x)
            {
                pair.push_back(i + 1);
                pair.push_back(j + 1);
                break;
            }
        }
    }
    if (pair.size() > 0)
        cout << pair[0] << " " << pair[1] << "\n";
    else
        cout << "IMPOSSIBLE\n";
}

int main()
{
    // ! TLE
    fastio;
    ll n{0}, x{0};
    cin >> n >> x;
    vll v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    indices(v, x);
    return 0;
}