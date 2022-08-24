#include <iostream>

#include "../include/cmpx.hpp"
int main() {
    cmpx z1(1.0, 2.0), z2(1, 0);
    std::cout << z1 + z2;
    return 0;
}