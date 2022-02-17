#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define repi(a, b, c) for (int i = (int)a; i < (int)b; i += (int)c)
#define repd(a, b, c) for (int i = (int)a; i > (int)b; i -= (int)c)

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

void solve(vector<char> &letters, vi &freq)
{
    size_t length = 0;
    for(size_t num : freq)
        length += num;
    if(letters.size() == length)
        cout << "Sad";
    else
    {
        

    }
}

int main()
{

    fastio;
    int n{0};
    cin >> n;
    vector<char> leters(n);
    vi freq(n,0);
    repi(0,n,1)
    {
        cin >> leters[i] >> freq[i];
    }
    solve(leters, freq);
    return 0;
}