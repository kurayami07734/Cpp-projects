#include <iostream>
#include "../include/Graph.hpp"
using namespace std;

int main()
{
	Graph g;
	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(1, 4);
	g.addEdge(2, 4);
	for(auto node : g.adjList)
	{
		cout << node.first << ": ";
		for(auto edges : node.second)
			cout << edges << " ";
		cout << "\n";
	}
}