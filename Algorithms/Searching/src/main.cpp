#include <iostream>
#include "../include/binary_search.hpp"
#include "../include/linear_search.hpp"
int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5};
	//std::cout << linear_search(v.begin(), v.end(), 3) << "\n";
	std::cout << binary_search(v.begin(), v.end(), 5) << "\n";
	return 0;
}