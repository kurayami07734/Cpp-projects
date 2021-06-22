#include <iostream>
#include "../include/vector.hpp"
int main()
{
	vector v1(3, 4, 5), v2(1,0,3);
	std::cout << (v1 ^ v2);
	return 0;
}