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

ll odds(ll n)
{
    if(n%2 ==0)
        return n / 2;
    else
        return n / 2 + 1;
}

int main()
{
    fastio;
    int T{0}, n{0};
    cin >> T;
    while (T--)
    {
        cin >> n;
        cout << odds(n) << "\n";
    }
    return 0;
}