#include <iostream>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

int num_of_divisions(std::vector<int> &chocolate, int birth_month, int birthday)
{
    int count{0}, sum{0};
    for (int i = 0; i < chocolate.size(); i++)
    {
        sum += chocolate.at(i);
        for (int j = i + 1; j < chocolate.size() - birth_month + 1; j++)
        {
            sum += chocolate.at(j);
            if (sum == birthday)
            {
                count++;
                sum = 0;
            }
        }
    }
    return count;
}
int main()
{
    using namespace std;
    fastio;
    int T{0}, birthday{0}, birth_month{0};
    cin >> T;
    vector<int> chocolate(T, 0);
    for (int i = 0; i < T; i++)
        cin >> chocolate.at(i);
    cin >> birthday >> birth_month;
    cout << num_of_divisions(chocolate, birth_month, birthday);
    return 0;
}