#include <iostream>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    using namespace std;
    fastio;
    int candies{0}, friends{0};
    cin >> candies >> friends;
    int ratio = candies / friends, rem = candies % friends;
    vector<int> dist(friends, ratio);
    if (rem != 0)
    {
        for (int i = dist.size() - 1; i > 0; i--)
        {
            if (rem > 0)
            {
                dist.at(i)++;
                rem--;
            }
        }
    }
    for (int i : dist)
        cout << i << " ";

    return 0;
}