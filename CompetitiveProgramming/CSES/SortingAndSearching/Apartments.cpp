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

ll allot(vll &people, vll &apartments, ll k)
{
    sort(all(people));
    sort(all(apartments));
    ll count{0}, i{0}, j{0};
    while (i < people.size() && j < apartments.size())
    {
        if (abs(people[i] - apartments[j]) <= k)
        {
            count++;
            i++;
            j++;
        }
        else if(apartments[j] - people[i] > k)
            i++;
        else
            j++;
    }
    return count;
}

int main()
{
    fastio;
    ll n{0}, m{0}, k{0};
    cin >> n >> m >> k;
    vll people(n), apartments(m);
    for (ll i = 0; i < n; i++)
        cin >> people[i];
    for (ll i = 0; i < m; i++)
        cin >> apartments[i];
    cout << allot(people, apartments, k) << "\n";

    return 0;
}