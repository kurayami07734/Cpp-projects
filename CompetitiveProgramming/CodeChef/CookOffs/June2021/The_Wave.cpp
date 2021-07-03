#include <iostream>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;

// Time Limit Exceeded :(
// Could not optimise this solution :(

void value_at_num(std::vector<ll>& roots, std::vector<ll>& nums)
{
    for(int num : nums) {
        ll result = 1;
        for(int root : roots)
            result *= (num - root);
        if(result > 0)
            std::cout << "POSITIVE\n";
        else if(result == 0)
            std::cout << "0\n";
        else
            std::cout << "NEGATIVE\n";
    }
}

int main()
{
    using namespace std;
    fastio;
    int N { 0 }, Q { 0 }, val { 0 };
    cin >> N >> Q;
    vector<ll> roots(N), nums(Q);
    for(int i = 0; i < N; i++)
        cin >> roots.at(i);
    for(int i = 0; i < Q; i++)
        cin >> nums.at(i);
    value_at_num(roots, nums);
    return 0;
}