#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false),std::cin.tie(NULL),std::cout.tie(NULL)


int main()
{
    using namespace std;
    fastio;
    int T{0}, n{0};
    cin >> T;
    while(T--)
    {
        cin >> n;
        if(n < 10)
            cout << "Thanks for helping Chef!\n";
        else
            cout << "-1\n";
    }
    return 0;
}