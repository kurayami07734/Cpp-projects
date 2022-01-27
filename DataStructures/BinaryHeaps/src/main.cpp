#include <iostream>
#include "../include/BinaryHeap.hpp"

int main()
{
	MaxBinaryHeap mbh;
	std::vector<int> v = {1, 2, 3, 5};
	mbh.insert(v);
	mbh.display();
	mbh.extract_max();
	mbh.display();
}