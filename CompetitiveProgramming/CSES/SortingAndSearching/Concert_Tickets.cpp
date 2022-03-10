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

void solve(vll &prices, vll &required)
{
    sort(all(prices));
    int i = 0, j = 0;
    while (i < prices.size() && j < required.size())
    {
        if (prices[i] <= required[j])
        {
            cout << prices[i] << "\n";
            i++;
            j++;
        }
        else 
        {
            cout << "-1\n";
            j++;
        }
    }
}

int main()
{
    fastio;
    int n{0}, m{0};
    cin >> n >> m;
    vll prices(n), required(m);
    for (int i = 0; i < n; i++)
        cin >> prices[i];
    for (int i = 0; i < m; i++)
        cin >> required[m];
    solve(prices, required);
    return 0;
}