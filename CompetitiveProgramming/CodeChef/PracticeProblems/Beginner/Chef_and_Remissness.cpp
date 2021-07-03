#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false),std::cin.tie(NULL),std::cout.tie(NULL)

void min_max_entries(int a, int b)
{
    std::cout << std::max(a, b) << " " << a + b << "\n";
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
        min_max_entries(x, y);
    }
    return 0;
}