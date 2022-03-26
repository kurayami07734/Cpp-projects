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

string diff(string &s, string &t)
{
    string m;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == t[i])
            m += "G";
        else
            m += "B";
    }
    return m;
}

int main()
{
    fastio;
    int T{0};
    cin >> T;
    string s,t;
    while (T--)
    {
        cin >> s >> t;
        cout << diff(s, t) << "\n";
    }
    return 0;
}