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

void solve()
{
    ll i{0}, j{0}, k{0}, m{3}, n{2}, x1{1}, y1{1}, z{0};
    ll x2{1}, y2{2};
    // cin >> n >> m;
    ll matrix[n + 1][m + 1];
    // cin >> x1 >> y1 >> x2 >> y2;
    matrix[x1][y1] = 1;
    matrix[x2][y2] = 2;
    bool chessLike = ((x1 + y1) % 2 != (x2 + y2) % 2);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (((i == x1) && (j == y1)) or ((i == x2) && (j == y2)))
                continue;
            if ((i + j) % 2 == (x1 + y1) % 2)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = (chessLike ? 2 : 3);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    solve();
    return 0;
}