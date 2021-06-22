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
#include <iostream>
#include <vector>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

int max_profit(std::vector<int> &stores, std::vector<int> &prices, std::vector<int> &people)
{
    int market_share{0}, profit{0}, max_profit{0};
    for (int i = 0; i < stores.at(i); i++)
    {
        market_share = people.at(i) / stores.at(i);
        profit = market_share * prices.at(i);
        max_profit = std::max(profit, max_profit);
    }
    return max_profit;
}
int main()
{
    using namespace std;
    fastio;
    int T{0}, N{0};
    cin >> T;
    while (T--)
    {
        cin >> N;
        vector<int> stores(N, 0), prices(N, 0), people(N, 0);
        for (int i = 0; i < N; i++)
            cin >> stores.at(i) >> people.at(i) >> prices.at(i);
        cout << max_profit(stores, prices, people) << "\n";
    }
    return 0;
}