#include <iostream>
#include <string>

#include "../include/PriorityQueue.hpp"

int main() {
    PriorityQueue pq;
    std::vector<std::string> names = {"jack",   "bruce", "hanekawa", "aditya",
                                      "hitagi", "mayoi", "tsukihi"};
    pq.enqueue(names[0], 3);
    pq.enqueue(names[1], 2);
    pq.enqueue(names[2], 1);
    pq.enqueue(names[3], 0);
    pq.enqueue(names[4], 5);
    pq.enqueue(names[5], 4);
    pq.enqueue(names[6], 2);
    pq.display();
    std::cout << pq.dequeue() << "\n" << pq.dequeue() << "\n";
    pq.display();
}