#include <iostream>
#include <vector>
#pragma once

void selection_sort(std::vector<int> &v)
{
	int min{0};
	for (size_t i = 0; i < v.size(); i++)
	{
		min = i;
		for (size_t j = i + 1; j < v.size(); j++)
			if (v.at(min) > v.at(j))
				min = j;
		std::swap(v.at(min), v.at(i));
	}
}