#pragma once
#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
#include <vector>

class Graph {
   private:
    // undirected graph
    std::unordered_map<int, std::list<int>> adjList;
    std::vector<bool> visited;

    bool cycleCheckBFS(int source);
    bool cycleCheckDFS(int source, int parent);

   public:
    // constructors
    Graph() = default;
    ~Graph() = default;
    Graph(std::vector<std::pair<int, int>> edges, int nodes);

    // getters
    std::vector<bool> getVisited();
    std::unordered_map<int, std::list<int>> getAdjList();

    // methods
    void addEdge(int u, int v);
    void DFS(int source);  // print to console in BFS manner
    void BFS(int source);  // print to console in DFS manner
    bool hasCycleBFS();
    bool hasCycleDFS();
};
