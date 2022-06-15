# [Top K frequent elements](https://leetcode.com/problems/group-anagrams/)

<details>
<summary>
Solution
</summary>

## Approach

### My solution

Algorithm

1. Create a hash table of the frequency of each element 
2. Using the hash table create a priority queue with the frequency of the element being the priority (higher frequency having higher priority)
3. pop the kth tops(max elements) 

Time complexity

$`O(n)`$ for creating the hash table, n is the number of elements

$`O(n\log(n))`$ for pushing the elements to the priority queue (as insertion would require re-balancing the priority queue)

$`O(n\log(n))`$ for extracting max element (again it would require rebalancing)

So, $`O(n\log(n))`$ is the time complexity 

Space complexity

$`O(n)`$ for the hash table

$`O(n)`$ for the priority queue

So, in total $`O(n)`$ auxiliary space is required

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

### Neetcode solution (hash map + bucket sort)

Algorithm

1. Create a hash table of the frequency of each element 
2. Creating a vector of length n+1 where the indices represent the frequency and the value at the index is all the elements
that have that frequency.
3. iterate backwards on this hash map like vector and append all the non-empty vectors to the result
4. return the result

Time complexity

$`O(n)`$ for creating the hash table, n is the number of elements

$`O(n)`$ for creating the count key and vector of elements hash table like vector (bucket sort)

so, $`O(n)`$ overall

Space complexity

$`O(n)`$ for the hash table

$`O(n)`$ for the vector

So, in total $`O(n)`$ auxiliary space is required

</details>