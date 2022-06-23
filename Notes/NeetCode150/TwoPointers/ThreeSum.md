# [Three Sum](https://leetcode.com/problems/3sum/)

<details>
<summary>
Solution
</summary>

## Approach 

Problem is similar to two sum 

We will sort the array, then iterate through the array
fixing the first of the triplet, then it reduces to two sum 

Triplets are required to be unique so we need additional loops



### Algorithm 

```c++
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0)
                break;
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int l = i+1, r = nums.size()-1;
            while(l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];
                if(sum < 0)
                    l++;
                else if(sum > 0)
                    r--;
                else
                {
                    res.push_back({nums[i], nums[l],  nums[r]});
                    int last_left = nums[l], last_right = nums[r];
                    while(l < r && nums[l] == last_left)
                        l++;
                    while(l < r && nums[r] == last_right)
                        r--;
                }
            }
        }
        return res;
    }
};
```
</details>