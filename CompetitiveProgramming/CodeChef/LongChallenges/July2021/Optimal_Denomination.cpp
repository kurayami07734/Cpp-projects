#include <iostream>
#include <vector>
#include <algorithm>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

// ! failed 

ull optimal_num_of_notes(std::vector<ull> &salaries)
{
    std::sort(salaries.begin(), salaries.end());
    ull min = salaries.at(0), sum{0};
    for (int i = 0; i < salaries.size(); i++)
        sum += (salaries.at(i) / min);
    return sum;
}
int main()
{
    using namespace std;
    fastio;
    int T{0}, n{0};
    cin >> T;
    while (T--)
    {
        cin >> n;
        vector<ull> salaries(n, 0);
        for (int i = 0; i < n; i++)
            cin >> salaries.at(i);
        cout << optimal_num_of_notes(salaries) << "\n";
    }
    return 0;
}