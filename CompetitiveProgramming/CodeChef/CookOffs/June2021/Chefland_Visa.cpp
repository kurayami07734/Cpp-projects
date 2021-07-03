#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

void will_get_visa(int x[], int y[], int z[])
{
    if(x[0] <= x[1] and y[0] <= y[1] and z[1] <= z[0])
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}

int main()
{
    using namespace std;
    fastio;
    int T { 0 };
    int x[2], y[2], z[2];
    cin >> T;
    while(T--) {
        cin >> x[0] >> x[1];
        cin >> y[0] >> y[1];
        cin >> z[0] >> z[1];
        will_get_visa(x, y, z);
    }

    return 0;
}