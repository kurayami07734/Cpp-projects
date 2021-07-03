//NOT PASSED
#include <iostream>
#include <string>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

int longest_valid_instruction(std::string &s)
{
    int max_length{0}, length{1};
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '<' and i != s.size() - 1)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s.at(j) == '>')
                    length++;
            }
        }
        if (length > max_length)
            max_length = length;
    }
    return max_length;
}

int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    while (T--)
    {
        string instruction;
        getline(cin, instruction);
        cout << longest_valid_instruction(instruction) << "\n";
    }
    return 0;
}