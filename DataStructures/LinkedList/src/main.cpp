#include <iostream>
#include "../include/list.hpp"
int main()
{
	int a[5] = {3, 4, 5, 6, 1};
	list l(a, 5);
	l.sort();
	std::cout << l;
	std::cout << l[3] << "\n";
	try
	{
		l.delete_node(5);
	}
	catch (const list_error &e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << l;
}