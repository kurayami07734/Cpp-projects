#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false),std::cin.tie(NULL),std::cout.tie(NULL)

bool is_triangle_valid(int a, int b, int c)
{
    //a, b and c are angles in degrees
    return (a + b + c == 180);
}

int main()
{
    using namespace std;
    fastio;
    int T{0}, a{0}, b{0}, c{0};
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;
        if(is_triangle_valid(a, b, c))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}