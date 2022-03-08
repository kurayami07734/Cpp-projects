#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define vll std::vector<ll>
#define repi(a, b, c) for (int i = (int)a; i < (int)b, i += (int)c)
#define repd(a, b, c) for (int i = (int)a; i > (int)b; i -= (int)c)

ll kadane(vll &v)
{
    ll sum = 0, max_sum = 0;
    if(v[0] < 0)
    {
        sum = v[0];
        max_sum = v[0];
    }
    for (int i = 0; i < v.size(); i++)
    {
        sum = max(v[i], v[i] + sum);
        max_sum = max(sum, max_sum);
    }
    return max_sum;
}

int main()
{

    fastio;
    int n{0};
    cin >> n;
    vll v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << kadane(v) << "\n";
    return 0;
}