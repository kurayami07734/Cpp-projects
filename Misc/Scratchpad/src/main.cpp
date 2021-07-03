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

void print_array(std::vector<int> &v)
{
	for (size_t i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
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

bool is_kth_bit_set(int num, int k)
{
	//explanation
	// 1 << (k - 1) == 2^(k-1) which is 1 followed by k-zeroes
	// by doing bitwise AND with num will give either one or zero
	return (num & (1 << (k - 1)));
}

int num_of_set_bits(int num)
{
	//naive approach
	int count{0};
	//    while(num > 0)
	//    {
	// O(log_2(N)) time complexity O(1) auxiliary space
	//        if((num & 1) > 0)
	//            count++;
	//        num = num >> 1;
	//    }
	// another approach
	while (num > 0)
	{
		count++;
		//Explanation
		//binary representation of a power of 2 contains only single one
		// eg -> 8 == 1000 , 2 == 10, etc
		// the number below it will not ones in the place
		// eg -> 8 - 1 = 7 == 0111 , 1 == 01
		// hence taking bitwise and of n and n-1 will be zero whenever n is a
		// power of 2
		num = num & (num - 1);
	}
	return count;
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
	for (int i = 1; i < v.size(); i++)
	{
		int current_val = v.at(i), j{0};
		for (j = i - 1; j >= 0 && v.at(j) > current_val; j--)
			v.at(j + 1) = v.at(j);
		v.at(j + 1) = current_val;
	}
}

int main()
{
	std::vector<int> v1 = {1, 3, 5, 3}, v2 = {9, 4, 1, 9, 5, -1, 35, 69};
	// // std::cout << std::boolalpha << are_elements_squared(v1, v2) << "\n";
	// // auto is_odd = [](int x)
	// // { return x % 2 != 0; };
	// //filter_vector(v1, is_even);
	// auto index = find(v1.begin(), v1.end(), 3);
	// std::string s1{"abc"}, s2{"bacabdcdedfre2gdkslh"};
	insertion_sort(v2);
	print_array(v2);
	return 0;
}
//#include "reverse.hpp"
//#include <cmath>
//#include <iostream>
//#include <vector>
//// int sum_of_digits(int n)
////{
////    int sum = 0;
////    while(n > 0)
////    {
////        int last_digit = n % 10;
////        sum += last_digit;
////        n /= 10;
////    }
////    return sum;
////}
//// bool is_palindrome(std::string str, size_t start, size_t end)
////{
////    if(start >= end)
////        return true;
////    else
////    {
////        if(str.at(start) == str.at(end))
////            is_palindrome(str, ++start, --end);
////        else
////            return false;
////    }
////}
////
//// bool isSmooth(std::vector<int> arr) {
////    bool result = false;
////    int len = arr.size();
////    int first_element = arr.at(0);
////    int last_element = arr.at(len-1);
////    if(len % 2 != 0)
////    {
////        int mid = (len - 1)/2;
////        result = ((arr.at(mid) == first_element)  and  (arr.at(mid) == last_element));
////    }
////    else if(len > 2 and len % 2 == 0)
////    {
////        int half = len/2;
////        int middle_value = arr.at(half-1) + arr.at(half);
////        result = ((first_element == middle_value) and (middle_value == last_element));
////    }
////    else
////        result = ((first_element == 0) and (last_element == 0));
////    return result;
////}
////
//// int has_passed(std::string s, int x, int y)
////{
////    int P{0}, F{0};
////    for(int i = 0; i < s.size(); i++)
////    {
////        if(s.at(i) == 'P')
////            P++;
////        else if(s.at(i) == 'F')
////            F++;
////    }
////    bool cnd1 = (F >= x);
////    bool cnd2 = (F == (x-1) && P >= y);
////    if(cnd2 || cnd1)
////        return 1;
////    else
////        return 0;
////}
//// void print_vector(std::vector<int> v)
////{
////    for(int i : v)
////        std::cout << i << " ";
////    std::cout << "\n";
////    return;
////}
//// long even_fib_sum(long upper_bound)
////{
////    long sum{0};
////    std::vector<long> fib_arr(2);
////    fib_arr[0] = 1;
////    fib_arr[1] = 1;
////    int i = 0;
////    do
////    {
////        fib_arr.push_back(fib_arr[i] + fib_arr[i+1]);
////        i++;
////        print_vector(fib_arr);
////    }while(fib_arr.at(fib_arr.size()-1) < upper_bound);
////    for(long num : fib_arr){
////        if(num % 2 == 0){
////            sum += num;
////            cout << sum << "\n";
////        }
////    }
////    return sum;
////}
//
//// bool is_possible(std::vector<int> v)
////{
////    if(v.at(0) > 25)
////        return false;
////    int balance{0};
////    for(int note : v)
////    {
////        if(note == 25)
////            balance += 25;
////        if(note == 50)
////            balance -= 25;
////        if(note == 100)
////            balance -= 75;
////    }
////    return (balance >= 0);
////}
//
//// int first_last_digit_sum(int num)
////{
////    int num_of_digits = log10(num) + 1;
////    int sum{0};
////    int first_digit = num/pow(10, num_of_digits - 1);
////    sum = first_digit + num % 10;
////    return sum;
////}
//
//int max_repetitions(std::string& str)
//{
//    int max_length{ 0 }, length{ 1 };
//    for(size_t i = 0; i < str.size() - 1; i++) {
//        if(str.at(i) == str.at(i + 1))
//            length++;
//        else {
//            max_length = std::max(max_length, length);
//            length = 1;
//        }
//    }
//    return max_length;
//}
//
//using ull = unsigned long long;
//
//void print_array(ull a[], ull length)
//{
//    for(ull i = 0; i < length; i++)
//        std::cout << a[i] << " ";
//    std::cout << std::endl;
//    return;
//}
//
//ull min_moves_required(ull arr[], size_t length)
//{
//    ull move_count{ 0 }, i{ 1 };
//    while(i < length) {
//        // if (arr[i - 1] <= arr[i])
//        // {
//        //     i++;
//        //     continue;
//        // }
//        // arr[i]++;
//        // move_count++;
//        move_count += abs(arr[i - 1] - arr[i]);
//        arr[i] += abs(arr[i - 1] - arr[i]);
//        i++;
//        print_array(arr, length);
//    }
//    return move_count;
//}
//
//ull total_amount_printed(ull days, ull interval, ull initial_rate, ull rate_increment)
//{
//    // 5 2 1 2 test case
//    // 0 -> sum += 1*2 -> sum = 2
//    // 1 -> sum += 3*2 -> sum = 8
//    // 2 -> sum += 5*1 -> sum = 13
//    ull sum{ 0 }, rate{ initial_rate }, period{ interval }, i{ 0 };
//    ull iterations = days / interval + 1;
//    ull days_left{ days };
//    while(i < iterations) {
//        sum += rate * period;
//        rate += rate_increment;
//        days_left -= period;
//        period = std::min(days_left, period);
//        i++;
//    }
//    return sum;
//}
//
//int main()
//{
//    using namespace std;
//    //    int T{0}, i{0};
//    //    cin >> T;
//    //    vector<int> bill_array(T);
//    //    for(size_t i = 0; i < T; i++)
//    //        cin >> bill_array.at(i);
//    //    vector<int> bill_array = {25,25,50,50};
//    //    print_vector(bill_array);
//    //    if(is_possible(bill_array))
//    //        cout << "YES\n";
//    //    else
//    //        cout << "NO\n";
//    //    string s = "AAAAAAAA";
//    //    ull arr[] = { 1000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
//    cout << total_amount_printed(5, 2, 1, 2);
//    return 0;
//}
// #include <iostream>
// #include <vector>
// #define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

// int max_profit(std::vector<int> &stores, std::vector<int> &prices, std::vector<int> &people)
// {
//     int market_share{0}, profit{0}, max_profit{0};
//     for (int i = 0; i < stores.at(i); i++)
//     {
//         market_share = people.at(i) / stores.at(i);
//         profit = market_share * prices.at(i);
//         max_profit = std::max(profit, max_profit);
//     }
//     return max_profit;
// }
// int main()
// {
//     using namespace std;
//     fastio;
//     int T{0}, N{0};
//     cin >> T;
//     while (T--)
//     {
//         cin >> N;
//         vector<int> stores(N, 0), prices(N, 0), people(N, 0);
//         for (int i = 0; i < N; i++)
//             cin >> stores.at(i) >> people.at(i) >> prices.at(i);
//         cout << max_profit(stores, prices, people) << "\n";
//     }
//     return 0;
// }