#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    int prescribed_a{0}, prescribed_b{0};
    int volume_a{0}, volume_b{0};
    while (T--)
    {
        cin >> volume_a >> volume_b >> prescribed_a >> prescribed_b;
        cout << prescribed_a / volume_a + prescribed_b / volume_b << "\n";
    }
    return 0;
}