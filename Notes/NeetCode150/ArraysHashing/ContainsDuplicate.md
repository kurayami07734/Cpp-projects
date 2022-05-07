# [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

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
