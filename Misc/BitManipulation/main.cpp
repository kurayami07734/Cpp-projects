#include <iostream>
#include <iomanip>

bool is_kth_bit_set(int num, int k)
{
    //explanation
    // 1 << (k - 1) == 2^(k-1) which is 1 followed by k-zeroes
    // by doing bitwise AND with num will give either one or zero
    return (num & ( 1 << (k - 1)));
}

int num_of_set_bits(int num)
{
    //naive approach 
    int count{0};
//    while(num > 0)
//    {
//        // O(log_2(N)) time complexity O(1) auxiliary space
//        if((num & 1) > 0)
//            count++;
//        num = num >> 1; 
//    }    
    // another approach
    while(num > 0)
    {
        count++;
        //Explanation
        //binary represntation of a power of 2 contains only single one
        // eg -> 8 == 1000 , 2 == 10, etc
        // the number below it will not ones in the place
        // eg -> 8 - 1 = 7 == 0111 , 1 == 01
        // hence taking bitwise and of n and n-1 will be zero whenever n is a 
        // power of 2
        num = num & (num - 1);
    }
    return count;
}

int main()
{
    std::cout << num_of_set_bits(16384) << "\n";
    return 0;
}
