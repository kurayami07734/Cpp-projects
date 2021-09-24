# Map (Unordered map & multimap)

1. It is an associative container, implemented using self-balancing binary trees(aka red-black trees)
2. It behaves similarly to python's dictionaries.
3. Data is stored in a sorted manner (according to the keys).
4. Insertion, deletion and searching are fast. (logarithmic time complexity)
5. unique keys can be added only **once**
6. **Multimaps can store duplicate keys**

## Unordered map

1. Insertion, deletion and searching take constant time (on average)
2. Data is **not** sorted while being inserted.
3. It is implemented via **hash tables**.
4. It belongs to the `<unordered_map>` header file.

## Operations

1. `insert()`
2. `find()` return iterators
3. `erase()` removes data

## Demonstration

```c++
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

class Person
{
	std::string name;
	size_t age;

public:
	Person() = default;
	Person(std::string name, int age)
		: name(name), age(age)
	{
	}

	bool operator==(const Person &p) const
	{
        // required for using with unordered_map
		return (name == p.name);
	}
	friend class HashFn;
	friend std::ostream &operator<<(std::ostream &out, const Person &p)
	{
		out << "Name : " << p.name << " Age : " << p.age;
		return out;
	}
};

class HashFn
{
    // required for using with unordered_map
public:
	size_t operator()(const Person &p) const
	{
		return (p.name.length() + p.age);
	}
};


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

    // unordered_map with custom class
    std::unordered_map<Person, int, HashFn> um;
	Person p1("Joe", 20), p2("Jane", 32), p3("Ford", 54);
	um[p1] = 300;
	um[p2] = 540;
	um[p3] = 1000;

	for (auto p : um)
	{
		std::cout << p.first << " Salary : " << p.second << "\n";
	}
	return 0;
	return 0;
}
```
