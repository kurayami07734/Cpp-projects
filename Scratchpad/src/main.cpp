#include <iostream>
#include <vector>
#include <unordered_map>
#include "../include/factorial.hpp"
using namespace std;
#define vi std::vector<int>
#define vd std::vector<double>
#define repi(i, f, c) for (int j = (int)i; j < (int)f; j += (int)c)
#define repd(i, f, c) for (int j = (int)i; j > (int)f; j -= (int)c)

string count(string s)
{
    vector<int> m(26, 0);
    for (char c : s)
        m[c - 'a']++;
    // return m;
    string ans;
    for (auto i : m)
        ans.append(to_string(i));
    return ans;
}

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> m;
    for (auto s : strs)
    {
        m[count(s)].push_back(s);
    }
    vector<vector<string>> ans;
    for (auto i = m.begin(); i != m.end(); i++)
        ans.push_back(i->second);
    return ans;
}
vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> m;
    for (int num : nums)
        m[num]++;
    vector<vector<int>> freq(nums.size() + 1);
    vector<int> res;
    for (auto pair : m)
        freq[pair.second].push_back(pair.first);
    for (int i = nums.size(); i >= 0; i--)
    {
        if (freq[i].size() != 0 && k > 0)
        {
            res.insert(res.end(), freq[i].begin(), freq[i].end());
            k -= freq[i].size();
        }
    }
    return res;
}

string encode(vector<string> &strs)
{
    // write your code here
    string res;
    for (auto str : strs)
        res += to_string(str.size()) + "#" + str;
    return res;
}

/*
 * @param str: A string
 * @return: dcodes a single string to a list of strings
 */
vector<string> decode(string &str)
{
    // write your code here
    vector<string> decoded;
    int i = 0;
    while (i < str.size())
    {
        int j = i;
        while (str[j] != '#')
        {
            j++;
        }
        int len = stoi(str.substr(i, j - i));
        // cout << str.substr(j + 1, j + len-1) << "\n";
        decoded.push_back(str.substr(j + 1, len));
        i = j + len + 1;
    }
    return decoded;
}

bool isPalindrome(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]) || isalpha(s[i]))
            s[i] = tolower(s[i]);
        else
            s.erase(s.begin() + i, s.begin() + i + 1);
    }

    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - i - 1])
            return false;
    return true;
}
int main()
{
    vector<string> strs = {"Aditya", "Simps", "for", "##_@*/!"};
    string cipher = encode(strs);
    vector<string> op = decode(cipher);
    cout << boolalpha << isPalindrome(string("a.b,.")) << "\n";
    return 0;
}