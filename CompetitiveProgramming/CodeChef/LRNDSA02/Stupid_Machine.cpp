// NOT PASSED
#include <iostream>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
using ull = unsigned long long;

// ull max_of_vector(std::vector<ull> &v)
// {
//     ull max_val = v.at(0);
//     for (int i = 0; i < v.size(); i++)
//         if (v.at(i) > max_val)
//             max_val = v.at(i);
//     return max_val;
// }

ull optimal_token_distribution(std::vector<ull> &capacities)
{
    ull max_tokens{capacities.at(0)}, count{capacities.at(0)};
    for (int i = 1; i < capacities.size(); i++)
    {
        if (capacities.at(i) < max_tokens)
            max_tokens = capacities.at(i);
        else
            capacities.at(i) = max_tokens;
        count += capacities.at(i);
    }
    return count;
}

int main()
{
    using namespace std;
    fastio;
    int T{0}, N{0};
    cin >> T;
    while (T--)
    {
        cin >> N;
        vector<ull> capacities(N);
        for (ull &size : capacities)
            cin >> size;
        cout << optimal_token_distribution(capacities);
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    ll n,x,ans;
// 	    cin>>n;
// 	    cin>>x;
// 	    ans=x;
// 	    for(int i=1;i<n;i++)
// 	    {
// 	        ll b;
// 	        cin>>b;
// 	        x=min(x,b);
// 	        ans+=x;
// 	    }
// 	    cout<<ans<<endl;
// 	}
// 	return 0;
// }