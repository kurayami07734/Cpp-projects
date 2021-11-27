#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi vector<int>
#define vd vector<double>
#define repi(i, f, c) for (int j = i; j < f, j += c)
#define repd(i, f, c) for (int j = i; j > f; j -= c)

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

int main()
{

    fastio;
    int T{0}, s, a, b, c, fp;
    float p;
    cin >> T;
    while (T--)
    {
        cin >> s >> a >> b >> c;
        p = s * (1 + (float)c / 100);
        fp = floor(p);
        if (fp >= a && fp <= b)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}