#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

ull max_of_3(ull a, ull b, ull c)
{
    return std::max(std::max(a, b), std::max(b, c));
}

void votes_required(ull a, ull b, ull c)
{
    
}

int main()
{
    using namespace std;
    fastio;
    ull T{0}, a{0}, b{0}, c{0};
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c;
        votes_required(a, b, c);
    }
    return 0;
}