# Map (& multimap)

1. It is an associative container, implemented using self-balancing binary trees(aka red-black trees)
2. It behaves similarly to python's dictionaries.
3. Data is stored in a sorted manner (according to the keys).
4. unique keys can be added only **once**
5. **Multimaps can store duplicate keys**

## Operations

1. `insert()`
2. `find()` return iterators
3. `erase()` removes data

## Demonstration

```c++
#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, int> m;
	// Insertion
	m["Joe"] = 19;
	m.insert(std::make_pair("Jane", 21));
	// Searching
	auto it = m.find("Jane");
	std::cout << it->first << "\n";
	// Deletion
	m.erase("Joe");
	std::cout << m.count("Joe") << "\n";

	m["Henry"] = 59;
	m["Tim"] = 81;
	m["June"] = 20;

	// Traversal
	for (auto p : m)
		std::cout << p.first << " : " << p.second << "\n";
	return 0;
}
```
