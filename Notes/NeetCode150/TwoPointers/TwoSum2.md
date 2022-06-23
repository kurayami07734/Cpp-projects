# [Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

<details>
<summary>
Solution
</summary>

## Approach (Two pointers)


### Algorithm 

create two pointers `hi` and `lo`, initialized to `0` and `vector.size()-1`

1. if sum of values at `hi` and `lo` is equal to target, return it 
2. if sum > values then decrement `hi`
3. else increment `lo`

```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo = 0, hi = numbers.size()-1;
        while(lo < hi)
        {
            int sum = numbers[lo] + numbers[hi];
            if(sum == target)
                return {lo+1, hi+1};
            else if(sum > target)
                hi--;
            else
                lo++;
        }
        return {};        
    }
};
```
</details>