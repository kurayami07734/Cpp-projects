# [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)

<details>
<summary>
Solution
</summary>


## Approach

### NeetCode solution (sets)

Imagine the given elements on the number line

Idea is use sets
and check for each element if its left neighbour exist in the set 
if not then new sequence has begun, and keep checking for its right neighbours
return the longest length

Time Complexity

$`O(n)`$ for creating set

Space Complexity

$`O(n)`$ for the set

```c++
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest{1};
        for(int num : nums)
        {
            
            if(numSet.find(num - 1) == numSet.end())
            {
                int length{0};
                while(numSet.find(num+length) != numSet.end())
                    length++;
                longest = max(length, longest);
            }
        }
        return longest;
    }
};
```

</details>