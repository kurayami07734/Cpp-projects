# [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

## Problem statement

> Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

## Constraints

> 1 <= nums.length <= 1e5  
> -1e9 <= nums[i] <= 1e9

## Examples

> Input: nums = [1,2,3,1]  
> Output: true

> Input: nums = [1,2,3,4]  
> Output: false

> Input: nums = [1,1,1,3,3,4,3,2,4,2]  
> Output: true

<details>
<summary> Solutions </summary>

### Approach

Since the numbers do **not** have any special constraint, we will need to use extra memory or use
nested loops to keep track of the occurrences.

Here I've only add the set based solution

```c++
bool containsDuplicate(vector<int>& nums) {
    // linear in time and space complexity
        unordered_set<int> s;
        for(int num : nums)
        {
            if(!s.insert(num).second)
                return true;
        }
        return false;
    }
```

</details>
