#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    using namespace std;
    fastio;
    int score{0};
    cin >> score;
    if(score >= 0 && score < 40)
        cout << (40 - score);
    else if(score >= 40 && score < 70)
        cout << (70 - score);
    else if(score >= 70 && score < 90)
        cout << (90 - score);
    else
        cout << "expert";
    return 0;
}