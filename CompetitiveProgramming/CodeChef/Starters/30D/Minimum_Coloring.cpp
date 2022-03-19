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

// * most optimal coloring has to be chess board like
// * i.e. min 2 colors are required
// * otherwise 3 colors are sufficient for required condition
// * example
// * 1 2 (chess-like) or 1 3
// * 2 1                 3 2

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x1{0}, y1{0}, z{0};
    ll x2{0}, y2{0};
    cin >> n >> m;
    ll matrix[n + 1][m + 1];
    cin >> x1 >> y1 >> x2 >> y2;
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
                matrix[i][j] = (chessLike ? 2 : 4);
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
    fastio;
    int T{0};
    cin >> T;
    // cin >> n;
    while (T--)
    {
        solve();
    }
    return 0;
}