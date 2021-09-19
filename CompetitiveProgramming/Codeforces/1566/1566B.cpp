#include <iostream>
#include <algorithm>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
#include <string>
int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int num_of_zeroes = count(s.begin(), s.end(), '0');
        if (num_of_zeroes == 0)
        {
            cout << "0\n";
            continue;
        }
        int first = s.find("0");
        int last = s.find_last_of("0");
        if(last - first + 1 == num_of_zeroes)
            cout << "1\n";
        else
            cout << "2\n";
    }
    return 0;
}