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

int main()
{

    fastio;
    int T{0}, x{0};
    cin >> T;
    while (T--)
    {
        cin >> x;
        if (x >= 200)
            cout << "Hard\n";
        else if (x >= 100)
            cout << "Medium\n";
        else if (x >= 1)
            cout << "Easy\n";
    }
    return 0;
}