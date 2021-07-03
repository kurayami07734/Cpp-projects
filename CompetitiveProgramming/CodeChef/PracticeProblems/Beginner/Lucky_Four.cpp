#include <iostream>
#include <string>
int count_four(int num)
{
    std::string str = std::to_string(num);
    int count{0};
    for(char c : str)
        if(c == '4')
            count++;
    return count;
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
        cout << count_four(n) << "\n";
    }
    return 0;
}