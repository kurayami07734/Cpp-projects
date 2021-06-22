#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false),std::cin.tie(NULL),std::cout.tie(NULL)

char relation_between(int a, int b)
{
    if(a > b)
        return '>';
    else if(a < b)
        return '<';
    else
        return '=';
}

int main()
{
    using namespace std;
    fastio;
    int T{0}, x{0}, y{0};
    cin >> T;
    while(T--)
    {
        cin >> x >> y;
        cout << relation_between(x, y) << "\n";
    }
    return 0;
}