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

int solve(int a, int b)
{
    int num = 1;
    int x = 1, y = 1;
    while (x != a && y != b)
    {
        
    }
    return num;
}

int main()
{

    fastio;
    int T{0}, x{0}, y{0};
    cin >> T;
    while (T--)
    {
        cin >> y >> x;
        cout << solve(x, y) << "\n";
    }
    return 0;
}