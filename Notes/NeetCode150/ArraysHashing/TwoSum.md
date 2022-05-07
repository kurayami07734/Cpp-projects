# [Two sum](https://leetcode.com/problems/two-sum/)

<details>
<summary>
Solution
</summary>

## Approach

### naive/brute force

Use nested loops. (quadratic time complexity)

### Maps

Algorithm

1. Keep the map empty initially and start the for loop
2. check if the diff of target and ith element is in the map
   1. if it is present, then return the ith element and the index i
   2. if not, then add the ith element and i to the map
3. return an empty vector for the default case

```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; // element : index
        for(int i = 0; i < nums.size(); i++)
        {
            if(m.find(target - nums[i]) != m.end())
            {
                return {m[target - nums[i]], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
```

</details>
