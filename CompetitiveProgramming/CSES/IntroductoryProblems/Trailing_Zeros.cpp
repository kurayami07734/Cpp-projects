#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;

ull trailing_zeroes_in_factorial(ull num)
{
    //by this we find highest power of 5 in factorial
    ull count{0}, k{5};
    while (num / k > 0)
    {
        count += num / k;
        k *= 5;
    }
    return count;
}
int main()
{
    using namespace std;
    fastio;
    ull T{0};
    cin >> T;
    cout << trailing_zeroes_in_factorial(T);
    return 0;
}