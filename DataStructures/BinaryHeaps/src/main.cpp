#include <iostream>
#include <algorithm>
#include "../include/BinaryHeap.hpp"

void print(std::vector<int> &v)
{
	for (int num : v)
		std::cout << num << " ";
	std::cout << "\n";
}

void heap_sort(std::vector<int> &v)
{
	MaxBinaryHeap mbh;
	mbh.insert(v);
	for (int i = v.size() - 1; i >= 0; i--)
	{
		v[i] = mbh.extract_max();
	}
}

int main()
{
	MaxBinaryHeap mbh;
	std::vector<int> v = {5, 3, -1, 1, 4};
	// make_heap(v.begin(), v.end());
	heap_sort(v);
	print(v);
}