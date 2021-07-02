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

```mermaid
graph TD
    subgraph "Algorithm"
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
