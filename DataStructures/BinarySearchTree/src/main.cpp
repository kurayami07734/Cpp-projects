#include <iostream>
#include <iomanip>
#include "../include/BST.hpp"

int main()
{
	BinarySearchTree bst;
	bst.insert(10);
	bst.insert(30);
	bst.insert(8);
	bst.insert(7);
	std::cout << bst.max() << " " << bst.min() << std::endl;
}