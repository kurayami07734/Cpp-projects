#include <iostream>
#include "../include/bubble_sort.hpp"
#include "../include/insertion_sort.hpp"
#include "../include/merge_sort.hpp"
#include "../include/selection_sort.hpp"
template <typename Iter>
void print_array(const Iter &start, const Iter &end)
{
	for (auto i = start; i != end; ++i)
		std::cout << *i << " ";
	std::cout << "\n";
}

int main()
{
	std::vector<int> v = {4, 3, -1, 2};
	optimized_bubble_sort(v);
	print_array(v.begin(), v.end());
}