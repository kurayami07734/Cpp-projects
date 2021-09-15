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
	std::cout << "\n";
}