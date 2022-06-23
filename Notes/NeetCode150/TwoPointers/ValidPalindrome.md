# [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)

<details>
<summary>
Solution
</summary>

## Approach (Two pointers)

### Algorithm 

```c++
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right=s.size()-1;
        while(left < right)
        {
            if(!isalnum(s[left]))
                left++;
            else if(!isalnum(s[right]))
                right--;
            else if(tolower(s[left]) != tolower(s[right]))
                return false;
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
};
```
</details>