#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false),std::cin.tie(NULL),std::cout.tie(NULL)

int trailing_zeroes_in_factorial(int num)
{
    
    int count{0}, constant{5};
    while((num/constant) > 0)
    {
        count += num/constant;
        constant *= 5;
    }
    return count;
}

int main()
{
    using namespace std;
    fastio;
    int T{0}, x{0};
    cin >> T;
    while(T--)
    {
        cin >> x;
        cout << trailing_zeroes_in_factorial(x) << "\n";
    }
    return 0;
}