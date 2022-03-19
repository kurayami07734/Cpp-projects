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

int solve(vi &v, int n)
{
    int fsum = (n * (n + 1)) / 2, lsum = 0;
    for (int num : v)
        lsum += num;
    return abs(fsum - lsum - (lsum / (n - 1)));
}

int main()
{
    fastio;
    int n{0};
    cin >> n;
    vi v(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> v[i];
    cout << solve(v, n);
    return 0;
}