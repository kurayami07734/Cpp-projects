#include <iostream>
#include <vector>
#include "../include/factorial.hpp"
using vi = std::vector<int>;

int time_taken(vi &h)
{
    int time = 0;
    for (int i = 0; i < h.size(); i++)
    {
        if (i == 0)
            time += (h[i] + 1);
        else if (h[i] > h[i - 1])
        {
            time++; // jump time
            time += (h[i] - h[i - 1] + 1);
        }
        else
        {
            time += (h[i] - h[i - 1]); // down to level of next tree
            time += 2;                 // jumping and eating time
        }
    }
    return time;
}
using namespace std;
using ll = long long;
using vll = vector<ll>;
ll vmin(vll &v)
{
    ll worst = v[0];
    for (auto num : v)
        worst = min(worst, num);
    return worst;
}
ll maxOf3(ll a, ll b, ll c)
{
    return max(max(a, b), max(a, c));
}
void print(vll &v)
{
    for (auto num : v)
        cout << num << " ";
    cout << "\n";
}
void solve()
{
    ll i{0}, j{0}, k{2}, m{0}, n{5}, x{0}, y{0}, z{0};
    // cin >> n >> k;
    vll v = {4, 3, 4, 3, 5};
    // for (int i = 0; i < n; i++)
    //     cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (k >= 0)
        {
            if (i == 0)
            {
                if (v[1] == max(v[0], v[1]))
                    k++;
                v[1] = max(v[0], v[1]);
            }
            else if (i == n - 1)
            {
                if (v[n - 1] == max(v[n - 1], v[n - 2]))
                    k++;
                v[n - 1] = max(v[n - 1], v[n - 2]);
            }
            else
            {
                if (v[i] == maxOf3(v[i], v[i - 1], v[i + 1]))
                    k++;
                v[i] = maxOf3(v[i], v[i - 1], v[i + 1]);
            }
            k--;
        }
        print(v);
    }
    cout << vmin(v) << "\n";
}

int main()
{
    solve();
    return 0;
}