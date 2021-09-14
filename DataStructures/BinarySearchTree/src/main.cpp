#include <iostream>
#include <iomanip>
#include "../include/BST.hpp"

int main()
{
	BinarySearchTree bst;
	std::vector<int> vec = {10, 20, 403, 54, 9, 89, 0, 12};
	bst.insert(vec);
	bst.display_BFS();
}