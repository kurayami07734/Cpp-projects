#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define vll std::vector<ll>

int main()
{
    fastio;
    int n{0}, m{0}, k{0};
    cin >> n >> m >> k;
    int x{0};
    stack<int> s;
    vi v(n);
    int count = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (m--)
    {
        cin >> x;
        s.push(x);
    }

    while (s.size() > 0)
    {
        for (int num : v)
        {
            if (num - k < s.top() && s.top() < num + k)
            {
                count++;
                s.top();
                continue;
            }
            if (k == 0 && s.top() == num)
            {
                count++;
                s.top();
                continue;
            }
        }
        s.pop();
    }
    cout << count << "\n";

    return 0;
}