#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define repi(a, b, c) for (int i = (int)a; i < (int)b, i += (int)c)
#define repd(a, b, c) for (int i = (int)a; i > (int)b; i -= (int)c)

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

int odd_pairs(vi &v)
{
    int count = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if ((v[i] + v[i - 1]) % 2 != 0)
            count++;
    }
    return count / 2;
}

int main()
{

    fastio;
    int n{0};
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << odd_pairs(v);
    return 0;
}