#include <iostream>
#include <cmath>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

// ! didn't get to submit in time :(

int powerOf10(int n)
{
    int result = 1;
    while (n--)
    {
        result *= 10;
    }
    return result;
}

int div_by_3(int n)
{
    if (n == 1)
        return 3;
    else
    {
        int result = (powerOf10(n - 1) + 5);
        return result;
    }
}

int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << div_by_3(n) << "\n";
    }
    return 0;
}