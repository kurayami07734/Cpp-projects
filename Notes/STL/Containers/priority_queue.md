# Priority Queue

1. It is implemented via binary heaps
2. It is part of `<queue>` header file
3. Insertion & deletion are fast (logarithmic time complexity)

## Main functions

1. `push()` inserts data
2. `pop()` removes according to the priority
3. `top()` return top's data
4. `empty()` returns bool
5. `priority_queue<typename data, typename container = std::vector<data>, typename compare>`

## Example

```c++
#include <iostream>
#include <queue>
using namespace std;
class Person
{
	string name;
	size_t age;

public:
	Person() = default;
	Person(string name, size_t age)
		: name(name), age(age)
	{
	}
	friend std::ostream& operator << (std::ostream& out, const Person p)
	{
		out << "Name : " << p.name
			 << "\nAge : " << p.age << "\n";
		return out;
	}
	friend class PersonCompare;
};

class PersonCompare
{
public:
	bool operator()(Person &a, Person &b)
	{
		return (a.age < b.age);
	}
};

int main()
{
    //Init
    priority_queue<int> pq1; // by default it is a max heap
    priority_queue<int, std::vector<int>, std::greater<int>> pq2; //min heap
    //custom comparator class
	priority_queue<Person, vector<Person>, PersonCompare> pq;
	Person a("a", 10), b("b", 5), c("c", 50);
	pq.push(a);
	pq.push(b);
	pq.push(c);
	while(!pq.empty())
	{
		cout << pq.top();
		pq.pop();
	}
    return 0;
}
```
