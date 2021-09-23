# Set (multiset & unordered_set)

1. It stores unique element **only**
2. Stored elements **cannot** be updated
3. It is implemented by red-black trees
4. Insertion, deletion and searching are fast (logarithmic time)
5. Multisets **can** store duplicates
6. Unordered set don't sorted the inserted data and have constant time insertion, deletion and searching

## Demonstration

```c++
#include <iostream>
#include <set>

int main()
{
	// Init
	std::set<int> s{1, 3, 5, 40, 34, 9};
	std::multiset<int> s1{1, 3, 3, 3, 5, 5, 10, 49};

	//Insertion
	s.insert(15);

	// Deletion
	s.erase(40);

	// Searching
	std::cout << *(s.find(34)) << "\n";

	auto range = s1.equal_range(3);

	for (auto i = range.first; i != range.second; i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	// Traversal
	for (int num : s)
		std::cout << num << " ";
	std::cout << std::endl;
}
```
