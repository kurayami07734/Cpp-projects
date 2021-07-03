#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int max_work(int interval, int normal, int higher, int lower)
{
    int strat1 = 7 * normal;
    int strat2 = interval * higher + (7 - interval) * lower;
    return std::max(strat1, strat2);
}

int main()
{
    using namespace std;
    fastio;
    int T{0}, d{0}, x{0}, y{0}, z{0};
    cin >> T;
    while (T--)
    {
        cin >> d >> x >> y >> z;
        cout << max_work(d, x, y, z) << "\n";
    }
    return 0;
}