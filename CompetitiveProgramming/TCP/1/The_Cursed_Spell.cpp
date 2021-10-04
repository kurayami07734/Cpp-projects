#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
// ! still doesn't work for all test cases

std::string counter_spell(std::string &s, size_t length)
{
    std::string counter;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int index = 0;
    for (char c : s)
        index += (c - 'a' + 1);
    if (index > 26)
        index %= 26;
    for (size_t i = 0; i < length; i++)
        counter += alphabet.at(index - 1);
    return counter;
}

int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    string s;
    int length{0};
    while (T--)
    {
        cin >> length >> s;
        cout << counter_spell(s, length) << "\n";
    }
    return 0;
}