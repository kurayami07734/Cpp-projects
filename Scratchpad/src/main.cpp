#include <iostream>
#include <vector>
#include "../include/factorial.hpp"
#define vi std::vector<int>
#define vd std::vector<double>
#define repi(i, f, c) for (int j = (int)i; j < (int)f; j += (int)c)
#define repd(i, f, c) for (int j = (int)i; j > (int)f; j -= (int)c)
int main()
{
	vi v;
	repi(0, 10, 1)
	{
		v.push_back(j);		
	}
	repd(v.size()-1,0, 1)
	{
		std::cout << v.at(j) << " ";
	}
	return 0;
}