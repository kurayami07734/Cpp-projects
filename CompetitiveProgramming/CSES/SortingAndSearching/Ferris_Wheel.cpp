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

ll gondolas(vll &weights, ll max_weight)
{
    ll count{0}, i{0}, j{weights.size() - 1};
    sort(all(weights));
    while (i <= j)
    {
        if (weights[i] + weights[j] <= max_weight)
        {
            count++;
            i++;
            j--;
        }
        else
        {
            count++;
            j--;
        }
    }
    return count;
}

int main()
{
    fastio;
    ll n{0}, x{0};
    cin >> n >> x;
    vll weights(n);
    for (int i = 0; i < n; i++)
        cin >> weights[i];
    cout << gondolas(weights, x) << "\n";
    return 0;
}