#include <iostream>

int max_package_size(int no_of_cupcakes)
{
    //same of cupcakes in all packages
    // 1 <= size <= no_of_cupcakes
    return (no_of_cupcakes / 2 + 1);
}


int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T{0}, n{0};
    cin >> T;
    while(T--)
    {
        cin >> n;
        cout << max_package_size(n) << "\n";
    }
    return 0;
}