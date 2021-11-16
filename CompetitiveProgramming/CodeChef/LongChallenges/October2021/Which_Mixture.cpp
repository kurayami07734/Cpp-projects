#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    using namespace std;
    fastio;
    int T{0}, a{0}, b{0};
    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        if(a > 0 && b > 0)
            cout << "Solution\n";
        else if(b == 0)
            cout << "Solid\n";
        else if(a == 0)
            cout << "Liquid\n";
    }
    return 0;
}