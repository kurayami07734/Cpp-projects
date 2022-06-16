# [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)

<details>
<summary>
Solution
</summary>

## Approach

### Neetcode solution 

Concept

Checking each row and column is simple (use sets)

For the subgrid use a set where subgrid is defined as [r/3, c/3] (int division)

Time complexity

$`O(n^2)`$ 


Space complexity

$`O(n^2)`$ 


```c++
class Solution {
public:
     bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int columns[9][9] = {0};
        int subgrids[3][3][9] = {0};
        
        for(int r = 0; r < 9; r++)
        {
            for(int c = 0; c < 9; c++)
            {
                if(board[r][c] != '.')
                {
                    int num = board[r][c]-'1';
                    if(rows[r][num]++)
                        return false;
                    if(columns[c][num]++)
                        return false;
                    if(subgrids[r/3][c/3][num]++)
                        return false;
                }
            }
        }
        return true;      
    }
};
```

</details>