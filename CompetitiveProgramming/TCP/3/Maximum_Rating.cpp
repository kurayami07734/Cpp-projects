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

int max_sub_sum(vi &mov, int k)
{
    int max_sum = 0, cur_sum = 0;
    for (int i = 0; i < mov.size(); i++)
    {
        for (int j = i; j < i + k; j++)
            cur_sum += mov[i];
        if (cur_sum > max_sum)
            max_sum = cur_sum;
    }
    return max_sum;
}

int min(vi &rat)
{
    int min = rat.at(0);
    for (int r : rat)
        if (r < min)
            min = r;
    return min;
}

int main()
{

    fastio;
    int n, k;
    cin >> n >> k;
    vi len(n), rat(n);

    for (int i = 0; i < n; i++)
        cin >> len.at(i) >> rat.at(i);

    cout << max_sub_sum(len, k) * min(rat);

    return 0;
}