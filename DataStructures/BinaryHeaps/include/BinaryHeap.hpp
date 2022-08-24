#ifndef BINARYHEAP_HPP
#define BINARYHEAP_HPP
#include <iostream>
#include <vector>

class MaxBinaryHeap {
   private:
    std::vector<int> v;

   public:
    void insert(int value);
    void insert(std::vector<int> &vec);
    void display();
    int extract_max();
    MaxBinaryHeap() = default;
};

#endif  // BINARYHEAP_HPP