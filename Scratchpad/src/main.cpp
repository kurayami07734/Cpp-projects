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
        vector<int> m(26,0);
        for(char c : s)
            m[c-'a']++;
        // return m;
        string ans;
        for(auto i: m)
            ans.append(to_string(i));
        return ans;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(auto s : strs)
        {
            m[count(s)].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto i = m.begin(); i != m.end(); i++)
            ans.push_back(i->second);
        return ans;
    }

int main()
{
	vector<string> ip = {"bdddddddddd", "bbbbbbbbbbc"};
	vector<vector<string>> res = groupAnagrams(ip);
	for(auto r : res)
	{
		cout << "[";
		for (auto i : r)
			cout << i << ",";
		cout << "]";
	}
	return 0;
}