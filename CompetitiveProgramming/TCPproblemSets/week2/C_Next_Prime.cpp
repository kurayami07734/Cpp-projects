#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi vector<int>
#define vd vector<double>
#define repi(i, f, c) for (int j = i; j < f, j += c)
#define repd(i, f, c) for (int j = i; j > f; j -= c)

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

bool is_prime(int n)
{
    if (n == 2 || n == 3 || n == 5)
        return true;
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
        return false;
    for (int i = 6; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{

    fastio;
    int n{0}, i{0};
    cin >> n;
    do
    {
        if (is_prime(n + i))
        {
            cout << (n + i) << "\n";
            break;
        }
        i++;

    } while (true);
    return 0;
}