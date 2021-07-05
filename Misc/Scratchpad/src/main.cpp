#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <typeinfo>
#include <string>
void swap(int &a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
}

template <typename Iter>
void print_array(const Iter &start, const Iter &end)
{
	for (auto i = start; i != end; ++i)
		std::cout << *i << " ";
	std::cout << "\n";
}

void reverse(int a[], size_t size)
{
	//iterative reverse for int array
	size_t start{0}, end{size - 1};
	while (start <= end)
	{
		swap(a[start], a[end]);
		start++;
		end--;
	}
	// print_array(a, size);
}

void reverse(std::string &str, size_t begin, size_t end)
{
	//recursive reverse for std::string
	if (begin >= end)
		return;
	else
	{
		char temp = str.at(begin);
		str.at(begin) = str.at(end);
		str.at(end) = temp;
		reverse(str, ++begin, --end);
	}
}

bool are_elements_squared(std::vector<int> &v1, std::vector<int> &v2)
{

	if (v1.size() != v2.size())
		return false;
	//naive approach O(nlogn)
	// std::sort(v1.begin(), v1.end());
	// std::sort(v2.begin(), v2.end());
	// for (size_t i = 0; i < v1.size(); i++)
	// {
	// 	if (v1.at(i) * v1.at(i) != v2.at(i))
	// 		return false;
	// }
	// return true;

	// Better approach
	// linear time and constant space
	int sqr_sum{0}, rolling_sqr_sum{0};
	for (const int &i : v1)
		rolling_sqr_sum += i * i;
	for (const int &i : v2)
		sqr_sum += i;
	return (rolling_sqr_sum == sqr_sum);
}

// bool is_anagram(std::string &s1, std::string &s2)
// {

// }

void filter_vector(std::vector<int> &v, std::function<bool(int)> func)
{
	for (const int &i : v)
		if (func(i))
			std::cout << i << " ";
	std::cout << std::endl;
}

int add_if(std::vector<int> &v, std::function<bool(int)> func)
{
	int sum{0};
	for (const int &i : v)
		if (func(i))
			sum += i;
	return sum;
}

int binary_search(std::vector<int> &v, int value)
{
	size_t hi{v.size() - 1}, lo{0}, mid{0};
	while (lo <= hi)
	{
		mid = (hi + lo) / 2;
		if (v.at(mid) == value)
			return mid;
		else if (v.at(mid) > value)
			hi = mid - 1;
		else
			lo = mid + 1;
	}
	return -1;
}

size_t string_search(std::string &longer, std::string &shorter)
{
	size_t count{0};
	for (size_t i = 0; i < longer.size(); i++)
	{
		for (size_t j = 0; j < shorter.size(); j++)
		{
			if (longer.at(i + j) != shorter.at(j))
				break;
			if (j == shorter.size() - 1)
				count++;
		}
	}
	return count;
}
// longer : abcabc
// shorter : abc

//

// int string_search(std::string &longer, std::string &pattern, size_t hi = 0, size_t lo = 0)
// {
// 	hi = longer.size() - 1;
// 	if(longer.at(lo))
// }

auto multiply = [](int x = 1, int y = 1) -> int
{ return x * y; };

void bubble_sort(std::vector<int> &v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		for (size_t j = 0; j + i < v.size() - 1; j++)
			if (v.at(j) > v.at(j + 1))
				swap(v.at(j), v.at(j + 1));
	}
}

void optimized_bubble_sort(std::vector<int> &v)
{
	bool swapped{false};
	for (size_t i = 0; i < v.size(); i++)
	{
		swapped = false;
		for (size_t j = 0; j + i < v.size() - 1; j++)
			if (v.at(j) > v.at(j + 1))
			{
				swap(v.at(j), v.at(j + 1));
				swapped = true;
			}
		if (swapped == false)
			break;
	}
}

void selection_sort(std::vector<int> &v)
{
	int min{0};
	for (size_t i = 0; i < v.size(); i++)
	{
		min = i;
		for (size_t j = i + 1; j < v.size(); j++)
			if (v.at(min) > v.at(j))
				min = j;
		swap(v.at(min), v.at(i));
	}
}

void insertion_sort(std::vector<int> &v)
{
	for (size_t i = 1; i < v.size(); i++)
	{
		int current_val = v.at(i), j{0};
		for (j = i - 1; j >= 0 && v.at(j) > current_val; j--)
			v.at(j + 1) = v.at(j);
		v.at(j + 1) = current_val;
	}
}

template <typename Iter>
void merge(Iter start, Iter mid, Iter end)
{
	std::vector<typename Iter::value_type> temp;
	temp.reserve(std::distance(start, end));
	Iter left{start}, right{mid};
	while (left != mid && right != end)
	{
		if (*right > *left)
		{
			temp.push_back(*left);
			left++;
		}
		else
		{
			temp.push_back(*right);
			right++;
		}
	}
	temp.insert(temp.end(), left, mid);
	temp.insert(temp.end(), right, end);
	std::move(temp.begin(), temp.end(), start);
}

template <typename Iter>
void merge_sort(Iter start, Iter end)
{
	int size = std::distance(start, end);
	if (size <= 1)
	{
		return;
	}
	auto mid = std::next(start, size / 2);
	merge_sort(start, mid);
	merge_sort(mid, end);
	merge(start, mid, end);
}

template<typename Iter>
void linear_insert(Iter start, Iter end)
{
	auto val = *end;
	
}

template <typename Iter>
void insertion_sort(Iter start, Iter end)
{
	if (start == end)
		return;
	for (Iter i = start; i != end; ++i)
	{
		linear_insert(start, i);
	}
}

int main()
{
	std::vector<float> v = {1.1f, 0.25f, 3.87f, -49.00f, 85.54f, -50.35f, 504.12f};
	// std::cout << std::boolalpha << are_elements_squared(v1, v2) << "\n";
	// auto is_odd = [](int x)
	// { return x % 2 != 0; };
	//filter_vector(v1, is_even);
	// auto index = find(v1.begin(), v1.end(), 3);
	// std::string s1{"abc"}, s2{"bacabdcdedfre2gdkslh"};
	insertion_sort(v.begin(), v.end());
	print_array(v.begin(), v.end());
	return 0;
}
