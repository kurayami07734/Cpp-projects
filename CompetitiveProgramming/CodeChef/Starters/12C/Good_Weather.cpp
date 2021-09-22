#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

void is_weather_good(int weather[])
{
    int rainy{0}, sunny{0};
    for (int i = 0; i < 7; i++)
    {
        if (weather[i] == 1)
            sunny++;
        if (weather[i] == 0)
            rainy++;
    }
    if (sunny > rainy)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}

int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    int weather[7];
    while (T--)
    {
        for (int i = 0; i < 7; i++)
            cin >> weather[i];
        is_weather_good(weather);
    }

    return 0;
}