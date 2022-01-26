#include <iostream>
#include "../include/kadane.hpp"
#include <vector>
int main()
{
	using namespace std;
	vector<int> v = {-2, 2, 5, -11, 6};
	cout << maxSubarraySum(v);
}