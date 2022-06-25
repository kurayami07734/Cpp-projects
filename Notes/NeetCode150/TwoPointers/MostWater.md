# [Container with Most water](https://leetcode.com/problems/container-with-most-water/)

<details>
<summary>
Solution
</summary>

## Approach 

Two pointers are initialized one at the beginning and one at the end of the vector

Area is calculated and compared with max area

the pointer which has less height is changed, till both collide

and max area is returned



### Algorithm 

```c++
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i{0}, j=height.size()-1;
        int largest{0};
        while(i < j)
        {
            int area = (j-i)*min(height[j], height[i]);
            largest = max(area, largest);
            if(height[j] > height[i])
                i++;
            else
                j--;
        }
        return largest;
    }
};
```
</details>