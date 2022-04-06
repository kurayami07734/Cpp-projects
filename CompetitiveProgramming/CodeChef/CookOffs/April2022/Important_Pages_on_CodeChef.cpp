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


int main()
{
    fastio;
    int a{0}, b{0};
    cin >> a >> b;
    if(a == 1 && b == 1)
        cout << "https://discuss.codechef.com\n";
    else if(a == 0)
        cout << "https://www.codechef.com/practice\n";
    else
        cout << "https://www.codechef.com/contests\n";
    return 0;
}