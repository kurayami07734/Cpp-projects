# Searching Algorithms

## Linear Search

It can be implemented in many ways

```c++
// simple for loop
int linear_search(std::vector<int> &v, int value)
{
    for(int i = 0; i < v.size(); i++)
        if(v.at(i) == value)
            return i;
    return -1;
}

//using std::find

int index = std::find(v.begin(), v.end(), value);
```

## Binary search

Faster way to search within sorted data

$`O(log(N))`$ time complexity

```mermaid
graph LR
    subgraph "Binary Search"
    Step1[Check middle of array] --> Step2{is equal to value};
    Step2 -- Yes ----> Step4[Return Index];
    Step2 -- No --> Step5{is greater than value};
    Step5 -- Yes --> Step6[set upper bound equal to middle index];
    Step5 -- No --> Step7[set lower bound equal to middle index];
    Step7 --> Step8[repeat till upper and lower bound are unequal ];
    Step6 --> Step8;
    Step8 --> Step2;
end
```

```c++
//simple recursive implementation

int binary_search(std::vector<int> &v, int value, size_t hi = v.size()-1, size_t lo = 0)
{
    if(hi == lo)
        return -1;
    int mid = (lo + hi)/2;
    if(v.at(mid) == value)
        return mid;
    else if(v.at(mid) > value)
        hi = mid;
    else
        lo = mid;
    return binary_search(v, value, hi, lo);
}
```
