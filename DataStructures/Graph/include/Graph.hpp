#pragma once
#include <unordered_map>
#include <list>
class Graph
{
    // undirected graph
public:
    std::unordered_map<int, std::list<int>> adjList;

    void addEdge(int u, int v)
    {
        adjList[v].push_back(u);
        adjList[u].push_back(v);
    }
    Graph() = default;
    ~Graph() = default;
};
