#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int height(int grav_acc, int light_spd)
{
    int h{0};
    h = (light_spd * light_spd) / (2 * grav_acc);
    return h;
}

int main()
{
    using namespace std;
    fastio;
    int T{0}, g{0}, c{0};
    cin >> T;
    while (T--)
    {
        cin >> g >> c;
        cout << height(g, c) << "\n";
    }
    return 0;
}