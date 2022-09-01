#pragma once
#include <iostream>
#include <unordered_map>
#include <vector>

class Graph {
   private:
    // undirected graph
    std::unordered_map<int, std::vector<int>> adjList;
    std::vector<bool> visited;

    bool cycleCheckBFS(int source);
    bool cycleCheckDFS(int source, int parent);
    void addEdge(int u, int v);

   public:
    // constructors
    Graph() = default;
    ~Graph() = default;
    Graph(std::vector<std::pair<int, int>> edges, int nodes);

    // getters
    std::vector<bool> getVisited();
    std::unordered_map<int, std::vector<int>> getAdjList();

    // methods
    void DFS(int source);  // print to console in BFS manner
    void BFS(int source);  // print to console in DFS manner
    bool hasCycleBFS();
    bool hasCycleDFS();
};
