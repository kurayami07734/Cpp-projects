#include <algorithm>
#include <iostream>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

int min_need_to_solve(std::vector<int>& v)
{
    int total = 28, result = 0, i = 0;
    if(v.size() == 7)
        return 7;
    while(total != 0 and i < v.size()) {
        if(v.at(i) == 7)
            total -= 7;
        else if(v.at(i) == 6)
            total -= 6;
        else if(v.at(i) == 5)
            total -= 5;
        else if(v.at(i) == 4)
            total -= 4;
        else if(v.at(i) == 3)
            total -= 3;
        else if(v.at(i) == 2)
            total -= 2;
        else if(v.at(i) == 1)
            total -= 1;
        i++;
    }

    return i;
}

int main()
{
    using namespace std;
    fastio;
    int T { 0 }, N { 0 };
    cin >> T;
    while(T--) {
        cin >> N;
        std::vector<int> v(N);
        for(int i = 0; i < N; i++)
            cin >> v.at(i);
        cout << min_need_to_solve(v) << "\n";
    }
    return 0;
}