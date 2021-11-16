#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    using namespace std;
    fastio;
    int n{0};
    cin >> n;
    if (n % 100 == 0 && n > 0)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
    return 0;
}