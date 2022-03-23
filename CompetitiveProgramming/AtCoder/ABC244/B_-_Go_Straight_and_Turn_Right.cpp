#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
using vi = std::vector<int>;
using vd = std::vector<double>;
using vll = std::vector<ll>;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define all(x) x.begin(), x.end()

void coordinates(string &s)
{
    int x = 0, y = 0, dir = 0;
    for (char c : s)
    {
        if (c == 'S')
        {
            if (dir == 0)
                x++;
            else if (dir == 1)
                y--;
            else if (dir == 2)
                x--;
            else
                y++;
        }
        else if (c == 'R')
            dir = (dir + 1) % 4;
    }
    cout << x << " " << y << "\n";
    return;
}

int main()
{
    fastio;
    int n{0};
    // cin >> T;
    cin >> n;
    string s;
    cin >> s;
    coordinates(s);
    return 0;
}