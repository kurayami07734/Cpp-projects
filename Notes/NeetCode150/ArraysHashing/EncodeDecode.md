# [Encode and Decode strings](https://www.lintcode.com/problem/659/description)

<details>

<summary>
Solution
</summary>

tl;dr 

Problem is not difficult, I just struggled with coding it because I don't recall the functions properly


## Approach

It is more of a design problem than an algorithm problem

We are required to write two functions, one converting a vector of strings to a single string
the other decoding the single string **Without state variable** (which store length of each string)

### Encoding

Simply, append the length of the ith string, then use a delimiter 
and then append the string

### Decoding

Run a for loop, looking for the delimiter
splice the string, to get the length and each string


```c++
class Solution {
public:
    string encode(vector<string> &strs) {
        string res;
        for(auto str : strs)
            res += to_string(str.size()) + "#" + str;
        return res;
    }
    vector<string> decode(string &str) {
        vector<string> decoded;
        int  i = 0;
        while(i < str.size())
        {
           int j = i;
            while(str[j] != '#')
            {
                j++;
            }
            int len = stoi(str.substr(i,j-i));
            decoded.push_back(str.substr(j+1, len));
            i = j + len + 1;
        }
        return decoded;
    }
};
```
</details>