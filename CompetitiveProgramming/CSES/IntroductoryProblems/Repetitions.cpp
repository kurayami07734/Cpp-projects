#include <iostream>
#include <string>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

int max_repetitions(std::string &str)
{
    int max_length{0}, length{1};
    for (size_t i = 0; i < str.size() - 1; i++)
    {
        if (str.at(i) == str.at(i + 1))
            length++;
        else
        {
            max_length = std::max(max_length, length);
            length = 1;
        }
    }
    max_length = std::max(max_length, length);
    return max_length;
}

int main()
{
    using namespace std;
    fastio;
    string DNA;
    getline(cin, DNA);
    cout << max_repetitions(DNA);
    return 0;
}