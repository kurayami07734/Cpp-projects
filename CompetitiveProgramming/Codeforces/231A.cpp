#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    using namespace std;
    fastio;
    int T{0}, petya{0}, vasya{0}, tonya{0}, problems{0};
    cin >> T;
    while (T--)
    {
        cin >> petya >> vasya >> tonya;
        if(petya + vasya + tonya > 1)
            problems++;
    }
    cout << problems;
    return 0;
}