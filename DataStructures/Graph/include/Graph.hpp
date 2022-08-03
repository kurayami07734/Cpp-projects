#pragma once
#include <unordered_map>
#include <vector>
#include <list>
#include <iostream>
class Graph
{
    // undirected graph
public:
    std::unordered_map<int, std::list<int>> adjList;
    std::vector<bool> visited;

    void setNumOfNodes(int n)
    {
        visited.resize(n);
    }

    void addEdge(int u, int v)
    {
        adjList[v].push_back(u);
        adjList[u].push_back(v);
    }

    void DFS(int source)
    {
        visited[source] = true;
        std::cout << source << " ";
        for (auto it = adjList[source].begin(); it != adjList[source].end(); it++)
            if (!visited[*it])
                DFS(*it);
    }

    Graph() = default;
    ~Graph() = default;
};
