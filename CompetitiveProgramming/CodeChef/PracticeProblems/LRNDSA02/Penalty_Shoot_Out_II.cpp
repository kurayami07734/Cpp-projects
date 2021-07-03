#include <iostream>
#include <string>
#include <utility>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

int min_turns(std::string &s)
{
    std::pair<int, int> goals = {0, 0}, attempt = {s.size() / 2, s.size() / 2};
    int max_goals{0};
    for (int i = 0; i < s.size(); i++)
    {
        if(i % 2 == 0)
        {
            if(s.at(i) == '1')
                goals.first++;
            attempt.first--;
        }
        else
        {
            if(s.at(i) == '1')
                goals.second++;
            attempt.second--;
        }
        if((goals.second > goals.first + attempt.first) 
        or (goals.first > goals.second + attempt.second)
        or (goals.first == goals.second and i == s.size() - 1))
            return (i + 1);
    }
    return s.size();
}
int main()
{
    using namespace std;
    fastio;
    int T{0}, N{0};
    cin >> T;
    string shout_out;
    while (T--)
    {
        cin >> N >> shout_out;
        cout << min_turns(shout_out) << "\n";
    }
    return 0;
}