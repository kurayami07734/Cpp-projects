#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false),std::cin.tie(NULL),std::cout.tie(NULL)
using ull = unsigned long long;
ull GCD(ull a, ull b)
{
    // // greatest common divisor
    // ull gcd{1};
    // ull bound = std::min(a, b);
    // for (ull i = 2; i <= bound; i++)
    //     if(a % i == 0 && b % i == 0)
    //         gcd = i;
    // return gcd;
    ull rem{0};
    while(b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

ull LCM(ull a, ull b)
{
    //least common multiple
    ull product = a * b;
    return (product / GCD(a, b));
}

int main()
{
    using namespace std;
    fastio;
    int T{0}, x{0}, y{0};
    cin >> T;
    while(T--)
    {
        cin >> x >> y;
        cout << GCD(x, y) << " " << LCM(x, y) << "\n";
    }
    return 0;
}