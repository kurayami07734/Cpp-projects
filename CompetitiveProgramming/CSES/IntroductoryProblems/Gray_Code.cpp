#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
using vi = std::vector<int>;
using vd = std::vector<double>;
using vll = std::vector<ll>;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define all(x) x.begin(), x.end()

string gray(int num)
{
    string ans;
    while(num > 0)
    {
        ans.push_back(num & 1);
        num >>= 1;
    }
    return ans;
}

int main()
{
    fastio;
    int n{0};
    cin >> n;
    for (int i = 0; i < (1 >> n); i++)
        cout << gray(i) << "\n";

    return 0;
}