#include <iostream>
#include <cmath>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;

ull min_moves_required(ull arr[], size_t length)
{
    ull move_count{0}, i{0};
    for (i = 1; i < length; i++)
        if (arr[i] <= arr[i - 1])
        {
            move_count += abs(arr[i - 1] - arr[i]);
            arr[i] += abs(arr[i - 1] - arr[i]);
        }
    return move_count;
}

int main()
{
    using namespace std;
    fastio;
    size_t length{0};
    cin >> length;
    ull arr[length];
    for (size_t i = 0; i < length; i++)
        cin >> arr[i];
    cout << min_moves_required(arr, length);

    return 0;
}