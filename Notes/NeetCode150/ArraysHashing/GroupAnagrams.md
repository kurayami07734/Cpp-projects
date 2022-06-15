# [Group Anagrams](https://leetcode.com/problems/group-anagrams/)

<details>
<summary>
Solution
</summary>

## Approach

### Maps + sorting

Algorithm

1. Loop through the given vector of string
2. use the sorted ith string as the key and set the ith string as the value
3. return the map in the required form

Time complexity

$`O(mn\log(n))`$ n is average length of strings, m is the number of given strings

Space complexity

$`O(m)`$ m is the number of strings (only considering the map created)

```c++
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;
        for(auto s : strs)
        {
            string t = s;
            sort(s.begin(), s.end());
            m[s].push_back(t);
        }
        for(auto i : m)
            ans.push_back(i.second);
        return ans;
    }
};
```

</details>