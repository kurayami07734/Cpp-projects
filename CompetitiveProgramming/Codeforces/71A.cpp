#include <iostream>
#include <string>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    string s;
    while (T--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            s = s.at(0) + to_string(s.length() - 2) + s.at(s.length() - 1);
        }
        cout << s << "\n";
    }
    return 0;
}