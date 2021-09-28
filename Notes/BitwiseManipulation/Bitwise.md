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

<details>
<summary> Basic operations </summary>

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
```

</details>

<details>
<summary> Bit flipping, clearing and setting </summary>

```c++
int flip_bit(int num, size_t pos)
{
	int mask = 1 << pos;
	num = num ^ mask;
	return num;
}

int set_bit_to(int num, size_t pos, size_t val)
{
	int mask{1 << pos};
	if (val == 1)
		num |= mask;
	else if (val == 0)
	{
		mask = ~mask;
		num &= mask;
	}
	return num;
}

int clear_last_bits(int num, int k)
{
	int mask = ~0;
	mask <<= k;
	num &= mask;
	return num;
}

int clear_range_of_bits(int num, int i, int j)
{
	int mask = (-1 << (j + 1)) | ~(-1 << i);
	// mask has 2 components
	// all ones left shifted j+1 times
	// and all ones left shifted i times then flipped
	num &= mask;
	return num;
}
```

</details>

## Problems

<details>
<summary> Counting total number of set bits </summary>

```c++
// can also use __builtin_popcount()
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
```

</details>

</details>

<details>
<summary> Replacing bits in n by m </summary>

```c++
int clear_range_of_bits(int num, int i, int j)
{
	int mask = (-1 << (j + 1)) | ~(-1 << i);
	// mask has 2 components
	// all ones left shifted j+1 times
	// and all ones left shifted i times then flipped
	num &= mask;
	return num;
}

int replace_bits(int n, int m, int i, int j)
{
	// input n = 0b10000000000, m = 0b10101, i = 2, j = 6
	// output : 0b10001010100
	m <<= i;
	n = clear_range_of_bits(n, i, j);
	n |= m;
	return n;
}
```

</details>

<details>
<summary> fast exponentiation using bitwise operations</summary>

```c++
int fast_exponent(int base, int power)
{
	//fast exponentiation with bitwise operations
	// O(log2(power))
	int ans{1};
	while (power > 0)
	{
		if (power & 1) // checks if last bit is set
			ans *= base;
		power >>= 1;
		base *= base;
	}
	return ans;
}
```

</details>

<details>
<summary> Converting to binary </summary>

```c++
bool is_bit_set(int num, int k)
{
	return (num & (1 << k));
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
		for (int i = digits - 1; i >= 0; i--)
			result += std::to_string(is_bit_set(num, i));
	}
	return result;
}
```

</details>

<details>
<summary> Finding unique element in array </summary>

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

</details>

<details>
<summary> Finding 2 numbers which are not repeated in an array </summary>

```c++
// Algorithm
// perform xor with all element
// result will be xor of the 2 unique elements
// and this will have atleast 1 set bit
// find the position of this set bit
// and then perform xor with all elements which have this bit set
// this will find the bigger unique element
// perform xor with xor of both unique element to find smaller unique element
int first_set_bit(int num)
{
	int pos = 0;
	while (num > 0)
	{
		if (num & 1 == 1)
			return pos;
		pos++;
		num >>= 1;
	}
	return pos;
}

void two_unique_elements(std::vector<int> &v)
{
	int XOR = 0;
	for (int num : v)
		XOR ^= num;
	int pos = first_set_bit(XOR);
	int ans[2] = {0, 0};
	for(int num : v)
	{
		if(is_bit_set(num, pos))
			ans[1] ^= num;
	}
	ans[0] = ans[1] ^ XOR;
	std::cout << ans[0] << " " << ans[1] << "\n";
}

```

</details>

<details>
<summary> Subsets of char set </summary>

```c++
std::string filter(int num, std::string set)
{
	// creates a mapping b/w the binary representation
	// and the permutation of the set
	std::string result;
	for (int i = 0; i < set.size(); i++)
	{
		if (num & (1 << i))
			result += set.at(i);
	}
	return result;
}

void subsets(std::string set)
{
	// prints all the permutations of the set
	int bound = fast_exponent(2, set.size());
	for (int i = 0; i < bound; i++)
		std::cout << filter(i, set) << "\n";
}
```

</details>
