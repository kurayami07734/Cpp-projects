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
int main()
{
    vector<int> ip = {4, 1, -1, 2, -1, 2, 3};
    vector<int> op = topKFrequent(ip, 2);
    for(auto i : op)
        cout << i << " ";
    cout << "\n";
    return 0;
}