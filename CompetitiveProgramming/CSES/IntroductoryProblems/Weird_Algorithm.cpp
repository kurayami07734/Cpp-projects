#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

using ull = unsigned long long;
//Problem based on the Collatz Conjecture
void Collatz(ull num)
{
    fastio;
    while (num != 1)
    {
        std::cout << num << " ";
        if (num % 2 == 0)
            num /= 2;
        else
            num = 3 * num + 1;
    }
    std::cout << num << "\n";
}
int main()
{
    using namespace std;
    fastio;
    ull T{0};
    cin >> T;
    Collatz(T);
    return 0;
}