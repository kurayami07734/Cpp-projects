# [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

<details>
<summary> Solution </summary>

### Approaches

#### Naive

Use a map and count occurrences of each letter in both strings and compare both the maps

```c++
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        unordered_map<char,int> m1, m2;
        for(char c : s)
            m1[c]++;
        for(char c : t)
            m2[c]++;
        return (m1 == m2);
    }
};
```

#### Slightly less naive

Since it is given that s and t **only** contain lowercase english alphabets
an array of length 26 should suffice.
Here we shall increase the count if it is present in s and decrease the count
if it is present in t

```c++
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int counts[26] = {0};
        for(int i = 0; i < s.size(); i++)
        {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for(int num : counts)
            if(num != 0)
                return false;
        return true;
    }
};
```

 </details>
