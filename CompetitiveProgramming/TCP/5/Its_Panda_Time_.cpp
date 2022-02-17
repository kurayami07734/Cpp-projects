#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define repi(a, b, c) for (int i = (int)a; i < (int)b; i += (int)c)
#define repd(a, b, c) for (int i = (int)a; i > (int)b; i -= (int)c)

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

int time_taken(vi &h)
{
    int time = 0;
    for (int i = 0; i < h.size(); i++)
    {
        if (i == 0)
            time += (h[i] + 1);
        else if (h[i] > h[i - 1])
        {
            time++; // jump time
            time += (h[i] - h[i - 1] + 1);
        }
        else
        {
            time += (h[i - 1] - h[i]); // down to level of next tree
            time += 2;                 // jumping and eating time
        }
    }
    return time;
}

int main()
{

    fastio;
    int n{0};
    cin >> n;
    vi heights(n, 0);
    for (int i = 0; i < n; i++)
        cin >> heights[i];
    cout << time_taken(heights);
    return 0;
}