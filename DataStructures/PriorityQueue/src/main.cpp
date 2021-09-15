#include <iostream>
#include "../include/PriorityQueue.hpp"

int main()
{
	PriorityQueue pq;
	std::vector<PQNode> v;
	v.push_back(PQNode(std::string("aditya"), 0));
	pq.enqueue(v);
}