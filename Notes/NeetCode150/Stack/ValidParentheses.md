# [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

<details>
<summary>
Solution
</summary>

## Approach

Use stack

### Algorithm

loop through the string

1. if stack is empty push ith char
2. check if top and ith char form a valid parentheses
   1. then pop the top 
   2. otherwise continue to push
3. return  `stack.empty()` stack will be only empty if string is valid

```c++
class Solution {
public:
    bool closer(char c1, char c2)
    {
        if(c1 == '(' && c2 == ')')
            return true;
        if(c1 == '{' && c2 == '}')
            return true;
        if(c1 == '[' && c2 == ']')
            return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(st.empty())
                st.push(s[i]);
            else if(!st.empty() && !closer(st.top(), s[i]))
                st.push(s[i]);
            else if(!st.empty())
                st.pop();
        }
        return st.empty();
    }
};
```


</details>