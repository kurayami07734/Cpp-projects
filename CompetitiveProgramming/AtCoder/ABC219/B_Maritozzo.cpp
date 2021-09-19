#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
#include <string>

int main()
{
    using namespace std;
    fastio;
    string s[3];
    string result, order;
    for (int i = 0; i < 3; i++)
        cin >> s[i];
    cin >> order;
    for (char c : order)
    {
        if (c == '1')
            result += s[0];
        else if (c == '2')
            result += s[1];
        else if (c == '3')
            result += s[2];
    }
    cout << result;
    return 0;
}