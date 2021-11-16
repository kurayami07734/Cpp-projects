#include <iostream>
#include <vector>
#include <algorithm>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    using namespace std;
    fastio;
    int N{0}, k{0}, qualifiers{0};
    cin >> N >> k;
    vector<int> scores(N);
    for (int i = 0; i < N; i++)
    {
        cin >> scores.at(i);
    }
    for(int score : scores)
    {
        if(score >= scores.at(k-1) && score > 0)
            qualifiers++;
    }
    cout << qualifiers;
    return 0;
}