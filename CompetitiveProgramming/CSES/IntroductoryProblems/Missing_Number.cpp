#include <iostream>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
ull missing_num(std::vector<ull> &v, ull upper_bound)
{
    ull rolling_sum{0}, actual_sum{0};
    actual_sum = (upper_bound * (upper_bound + 1)) / 2;
    for(ull num : v)
        rolling_sum += num;
    return (actual_sum - rolling_sum);
}


int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    vector<ull> arr(T, 0);
    for (ull i = 0; i < T - 1; i++)
        cin >> arr.at(i);
    cout << missing_num(arr, T);
    return 0;
}