#include <iostream>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

int max_profit(int stores[], int prices[], int people[], int size)
{
    int market_share{0}, profit{0}, max_profit{0};
    for (int i = 0; i < size; i++)
    {
        market_share = people[i] / (stores[i] + 1);
        profit = market_share * prices[i];
        max_profit = std::max(profit, max_profit);
    }
    return max_profit;
}
int main()
{
    using namespace std;
    fastio;
    int T{0}, N{0};
    cin >> T;
    while (T--)
    {
        cin >> N;
        int stores[N], people[N], prices[N];
        for (int i = 0; i < N; i++)
            cin >> stores[i] >> people[i] >> prices[i];
        cout << max_profit(stores, prices, people, N) << "\n";
    }
    return 0;
}