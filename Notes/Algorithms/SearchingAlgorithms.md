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

auto index = std::find(v.begin(), v.end(), value); // returns iterator
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
    Step7 --> Step8[repeat till lower bound is less than upper bound ];
    Step6 --> Step8;
    Step8 --> Step2;
end
```

```c++
//simple iterative implementation

int binary_search(std::vector<int> &v, int value)
{
	size_t hi{v.size() - 1}, lo{0}, mid{0};
	while (lo <= hi)
	{
		mid = (hi + lo) / 2;
		if (v.at(mid) == value)
			return mid;
		else if (v.at(mid) > value)
			hi = mid - 1;
		else
			lo = mid + 1;
	}
	return -1;
}

```

## Naive String Search

```c++
size_t string_search(std::string &longer, std::string &shorter)
{
	size_t count{0};
	for (size_t i = 0; i < longer.size(); i++)
	{
		for (size_t j = 0; j < shorter.size(); j++)
		{
			if (longer.at(i + j) != shorter.at(j))
				break;
			if (j == shorter.size() - 1)
				count++;
		}
	}
	return count;
}
```
