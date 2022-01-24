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

//! Does not work

int water_trapped(vector<int> &heights)
{
    // int first = heights.at(0);
    int water = 0;
    // for (int i = 1; i < heights.size(); i++)
    // {
    //     if(heights.at(i) < first)
    //         water += (first - heights.at(i));
    // }
    // return water;
    int i{0},j{0};
    while(i < heights.size())
    {

    } 
}
int main()
{

    fastio;
    int T{0},n{0};
    cin >> T;
    while (T--)
    {
        cin >> n;
        vector<int> heights(n);
        for (int i = 0; i < n; i++)
            cin >> heights.at(i);
        cout << water_trapped(heights) << "\n";
    }
    return 0;
}