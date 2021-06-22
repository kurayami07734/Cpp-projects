#include <iostream>
#include "../include/list.h"
int main(int argc, char *argv[])
{
	int a[5] = {3, 4, 5, 6, 1};
	list l(a, 5);
	l.sort();
	l.reverse();
	std::cout << l << std::endl;
}