#include <iostream>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;

const ull MOD = 998244353;

ull factorial(ull num)
{
    ull result = 1;
    for (ull i = 2; i <= num; i++)
        result *= i;
    return result;
}

ull nCr(ull n, ull r)
{
    return (factorial(n) / (factorial(r) * (factorial(n - r))));
}

ull ways_teams_formed(ull r, ull k, std::vector<ull> &a, std::vector<ull> &p)
{
    ull total{0};
    for (ull i : a)
        total += nCr(i, r);

    return total % MOD;
}

int main()
{
    using namespace std;
    fastio;
    ull team_size{0}, num_of_schools{0};
    cin >> team_size >> num_of_schools;
    vector<ull> strength(num_of_schools), probability(num_of_schools);

    for (ull i = 0; i < num_of_schools; i++)
        cin >> strength[i];
    for (ull i = 0; i < num_of_schools; i++)
        cin >> probability[i];
    cout << ways_teams_formed(team_size, num_of_schools, strength, probability);
    return 0;
}