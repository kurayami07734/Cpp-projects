#include <iostream>
#include "../include/binary_search.hpp"
#include "../include/linear_search.hpp"
int main()
{
	std::vector<double> v = {1.03, 2.203, 3.003, 4.69, 5.10};
	//std::cout << linear_search(v.begin(), v.end(), 3) << "\n";
	std::cout << binarySearch(v.begin(), v.end(), 4.69) << "\n";
	return 0;
}