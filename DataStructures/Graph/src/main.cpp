#include <iostream>

#include "../include/Graph.hpp"
using namespace std;

int main() {
    Graph g(4);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(0, 1);
    g.addEdge(2, 3);
    // for(auto node : g.adjList)
    // {
    // 	cout << node.first << ": ";
    // 	for(auto edges : node.second)
    // 		cout << edges << " ";
    // 	cout << "\n";
    // }
    g.DFS(3);
    cout << endl;
}