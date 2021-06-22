#include <iostream>
#include "../include/list.hpp"
int main()
{
	int a[5] = {3, 4, 5, 6, 1};
	list l(a, 5);
	l.sort();
	l.reverse();
	std::cout << l << std::endl;
}