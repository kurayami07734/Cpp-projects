#include <iostream>
#include <algorithm>
#include "../include/BinaryHeap.hpp"

void print(std::vector<int> &v)
{
	for (int num : v)
		std::cout << num << " ";
	std::cout << "\n";
}

std::vector<int> heap_sort(std::vector<int> &v)
{
	MaxBinaryHeap mbh;
	mbh.insert(v);
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = mbh.extract_max();
	}
	std::reverse(v.begin(), v.end());
	return v;
}

int main()
{
	MaxBinaryHeap mbh;
	std::vector<int> v = {5, 3, -1, 1, 4};
	v = heap_sort(v);
	print(v);
}