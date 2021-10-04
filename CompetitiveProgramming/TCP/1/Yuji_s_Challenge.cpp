#include <iostream>
#include <cmath>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
// Solved after the contest
ull fingers_required(ull initial, ull target)
{
    ull power{initial}, fingers{0};
    while(power < target)
    {
        power *= 3;
        fingers++;
    }
    return fingers;
}

int main()
{
    using namespace std;
    fastio;
    ull T{0};
    cin >> T;
    while (T--)
    {
        ull initial, target;
        cin >> initial >> target;
        cout << fingers_required(initial, target) << "\n";
    }
    return 0;
}