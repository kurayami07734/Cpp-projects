#include <iostream>
#include <string>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

std::string left_shift(std::string &s)
{
    char c = s.at(0);
    for (int i = 1; i < s.size(); i++)
    {
        s.at(i - 1) = s.at(i);
    }
    // s += c;
    return s;
}
std::string max(std::string &s)
{
    std::string max = s;
    do
    {
        s = left_shift(s);
        if (s > max)
            max = s;
    } while (max != s);
    return max;
}
std::string min(std::string &s)
{
    std::string min = s;
    do
    {
        s = left_shift(s);
        if (s < min)
            min = s;
    } while (min != s);
    return min;
}
int main()
{
    using namespace std;
    fastio;
    string s;
    cin >> s;
    cout << max(s) << "\n"
         << min(s);

    return 0;
}