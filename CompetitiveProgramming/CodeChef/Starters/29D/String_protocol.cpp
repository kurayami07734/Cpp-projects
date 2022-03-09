#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define vll std::vector<ll>

int moves(string &s)
{
    int move_count = 0, i = 0;
    while (i < s.size())
    {
        move_count++;
        if (s[i] == s[i + 1])
        {
            i += 2;
        }
        else
        {
            i++;
        }
    }
    return move_count;
}
int main()
{
    fastio;
    int T{0}, n{0};
    cin >> T;
    string s;
    while (T--)
    {
        cin >> n;
        cin >> s;
        cout << moves(s) << "\n";
    }
    return 0;
}