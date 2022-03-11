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

int maxOf3(int a, int b, int c)
{
    return max(max(a, b), max(a, c));
}
int main()
{
    fastio;
    int T{0}, a{0}, b{0}, c{0};
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c;
        cout << maxOf3(a, b, c) << "\n";
    }
    return 0;
}