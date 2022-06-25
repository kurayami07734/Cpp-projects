# [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)

<details>
<summary>
Solution
</summary>

## Approach 



### Algorithm 

```c++
int trap(vector<int>& height) {
        if(height.size() == 0)
            return 0;
        int l = 0, r = height.size()-1, max_left = height[l], max_right = height[r], water = 0;
        while(l < r)
        {
            if(max_left < max_right)
            {
                l++;
                max_left = max(height[l], max_left);
                water += max_left - height[l];
                
            }
            else
            {
                r--;
                max_right = max(height[r], max_right);
                water += max_right - height[r];
            } 
        }
        return water;
    }
```
</details>