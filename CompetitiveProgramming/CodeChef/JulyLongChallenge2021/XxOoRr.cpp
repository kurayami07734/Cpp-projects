#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int num_of_operations(std::vector<ull> &val, int picked_at_once)
{
    int p{0}, i{1}, count{0};
    while (p < val.size())
    {
        i <<= p;
        for (int j = p; j < picked_at_once; j++)
        {
            val.at(j) ^= i;
            if (val.at(j) == 0)
                count++;
        }
        p++;
    }
    return count;
}

int main()
{
    using namespace std;
    fastio;
    int T{0}, n{0}, k{0};
    cin >> T;
    while (T--)
    {
        cin >> n;
        std::vector<ull> val(n, 0);
        for (int i = 0; i < n; i++)
            cin >> val.at(i);
        cout << num_of_operations(val, k);
    }
    return 0;
}