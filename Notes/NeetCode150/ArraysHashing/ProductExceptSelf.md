# [Product of array except self](https://leetcode.com/problems/product-of-array-except-self/)

<details>
<summary>
Solution
</summary>

## Approach

### Neetcode solution 

Concept

We need to not use division and not use auxiliary space to fulfil the requirements

Imagine we use 2 extra vectors prefix and postfix
where each element contains the product of all the elements before and after the current element
then the output will be the product of the prefix and postfix 

Example, input : [1,2,3,4]
then prefix : [1,1,2,6] postfix : [24,12,4,1]
output : [24,12,8,6]

But using the extra memory is not necessary, using 2 ints will suffice

Algorithm

1. iterate through result array
2. once to multiply the prefixes
3. again to multiply the postfixes


Time complexity

$`O(n)`$ two for loops (non-nested)


Space complexity

$`O(1)`$ no auxiliary space is used (output vector is not counted here)


```c++
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        int prefix{1}, postfix{1};
        for(int i = 0; i < nums.size(); i++)
        {
            result[i] = prefix;
            prefix *= nums[i];
        }
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            result[i] *= postfix;
            postfix *= nums[i];
        }
        return result;
    }
};
```

</details>