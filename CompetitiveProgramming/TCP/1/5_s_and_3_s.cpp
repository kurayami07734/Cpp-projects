#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
// Solved after the contest

int main()
{
    using namespace std;
    fastio;
    int num{0};
    cin >> num;
    if(num > 7)
        std::cout << "YES\n";
    else if(num < 3)
        std::cout << "NO\n";
    else if(num == 5 || num == 3)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
    return 0;
}