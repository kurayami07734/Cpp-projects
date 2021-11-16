#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

size_t min_bags(size_t a, size_t b, size_t c, size_t d)
{
    size_t total = a + b + c, ans{0};
    if (total % d != 0)
        ans = (total / d) + 1;
    else
        ans = total / d;
    return ans;
}

int main()
{
    using namespace std;
    fastio;
    int T{0};
    size_t a{0}, b{0}, c{0}, d{0};
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c >> d;
        cout << min_bags(a, b, c, d) << "\n";
    }
    return 0;
}