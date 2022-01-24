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
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
        return false;
    for (int i = 6; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

bool is_sum_of_two_primes(int n)
{
    for (int i = 2; i < n; i++)
    {
        if(is_prime(n-i) && is_prime(i))
            return true;
    }
    return false;
}

int main()
{

    fastio;
    int T{0},n{0};
    cin >> T;
    while (T--)
    {
        cin >> n;
        if(is_sum_of_two_primes(n))
            cout << "Deepa\n";
        else
            cout << "Arjit\n";
    }
    return 0;
}