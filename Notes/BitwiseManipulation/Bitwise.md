# Bitwise Manipulation

## Bitwise Operators

1. `&` bitwise _AND_
2. `|` bitwise _OR_
3. `~` bitwise _NOT_
4. `^` bitwise _XOR_
   1. `1 ^ 1 = 0`
   2. `1 ^ 0 = 1`
   3. `0 ^ 1 = 1`
   4. `0 ^ 0 = 0`
5. `>>` bitwise right shift (moves bits to right)
6. `<<` bitwise left shift (moves bits to left)

## Demonstration

```c++
// Checking evenness by bitwise operations
bool is_even(int num)
{
	bool ans = (bool)(~(num & 1));
	return ans;
}

bool is_kth_bit_set(int num, int k)
{
	//explanation
	// 1 << (k - 1) == 2^(k-1) which is 1 followed by k-zeroes
	// by doing bitwise AND with num will give either one or zero
	return (num & (1 << (k - 1)));
}

int num_of_set_bits(int num)
{
	//naive approach
	int count{0};
	//    while(num > 0)
	//    {
	// O(log_2(N)) time complexity O(1) auxiliary space
	//        if((num & 1) > 0)
	//            count++;
	//        num = num >> 1;
	//    }
	// another approach
	while (num > 0)
	{
		count++;
		//Explanation
		//binary representation of a power of 2 contains only single one
		// eg -> 8 == 1000 , 2 == 10, etc
		// the number below it will not ones in the place
		// eg -> 8 - 1 = 7 == 0111 , 1 == 01
		// hence taking bitwise and of n and n-1 will be zero whenever n is a
		// power of 2
		num = num & (num - 1);
	}
	return count;
}

bool is_bit_set(int num, int k)
{
	return (num & (1 << (k - 1)));
}
// Convert positive integers to their binary counterparts
std::string to_binary(size_t num)
{
	std::string result;
	if (num == 0)
		result += "0";
	else
	{
		int digits = log2(num) + 1;
		for (int i = digits; i > 0; i--)
			result += std::to_string(is_bit_set(num, i));
	}
	return result;
}

```

## Problems

```c++
// You are given an array of numbers
// where all except numbers are repeated
// return the number which is not repeated
int unique_element(std::vector<int> &v)
{
	int val = v.at(0);
	for (int i = 1; i < v.size(); i++)
	{
		val ^= v.at(i);
	}
	return val;
}
template<typename Iter>
auto unique_element(Iter begin, Iter end)
{
	auto val = *begin;
	Iter ptr = std::next(begin);
	while(ptr != end)
	{
		val ^= *ptr;
		++ptr;
	}
	return val;
}
// This solution uses the property of XOR
// a ^ a = 0 and a ^ a ^ b = b
```
