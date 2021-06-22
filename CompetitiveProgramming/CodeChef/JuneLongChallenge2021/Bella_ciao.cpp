#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

using ull = unsigned long long;

ull total_amount_printed(ull days, ull interval, ull initial_rate, ull rate_increment)
{
    // 5 2 1 2 test case
    // 0 -> sum += 1*2 -> sum = 2
    // 1 -> sum += 3*2 -> sum = 8
    // 2 -> sum += 5*1 -> sum = 13
    ull sum{0};
    // fast enough iterative approach
    //O(D/d) time complexity
    // ull rate{initial_rate}, period{interval};
    // ull iterations = days / interval + 1, i{0};
    // ull days_left{days};
    // while (i < iterations)
    // {
    //     sum += rate * period;
    //     rate += rate_increment;
    //     days_left -= period;
    //     period = std::min(days_left, period);
    //     i++;
    // }
    // sum = n*p*d +q*(n-1)*n/2 + (D%d)
    ull ratio = days / interval;
    sum = ratio * initial_rate * interval +
          (interval * rate_increment * (ratio * (ratio - 1)) / 2) +
          (days % interval) * (initial_rate + ratio * rate_increment);
    return sum;
}

int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    ull days{0}, interval{0}, initial_rate{0}, rate_increment{0};
    while (T--)
    {
        cin >> days >> interval >> initial_rate >> rate_increment;
        cout << total_amount_printed(days, interval, initial_rate, rate_increment) << "\n";
    }
    return 0;
}