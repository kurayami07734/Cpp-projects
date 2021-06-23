#include <iostream>
#include "../include/list.hpp"
int main()
{
	int a[5] = {3, 4, 5, 6, 1};
	list l(a, 5);
	l.sort();
	std::cout << l;
	l.delete_node(2);
	std::cout << l;
}