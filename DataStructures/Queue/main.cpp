#include <iostream>
#include "Queue.hpp"

int main()
{
    int a[] = {1,2,3,4,5};
    Queue::Queue<int> q(a, 5);
    std::cout << q;
    q.enqueue(10);
    std::cout << q;
    q.dequeue();
    std::cout << q;
    return 0;
}
