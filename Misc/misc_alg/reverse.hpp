#ifndef REVERSE_HPP
#define REVERSE_HPP
#include <string>
#include <iostream>
void swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

void print_array(int a[], size_t size)
{
    for(size_t i = 0; i < size; i++)
        std::cout << a[i] << " ";
    std::cout<< "\n";
}

void reverse(int a[], size_t size)
{
    //iterative reverse for int array
    size_t start{0}, end{size-1};
    while(start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;        
    }
    print_array(a,size);
}


void reverse(std::string &str, size_t begin, size_t end)
{
    //recursive reverse for std::string
    if(begin >= end)
        return;
    else
    {
        char temp = str.at(begin);
        str.at(begin) = str.at(end);
        str.at(end) = temp;
        reverse(str, ++begin, --end);        
    }
}
#endif // REVERSE_HPP