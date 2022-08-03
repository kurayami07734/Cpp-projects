#pragma once
#include <unordered_map>
#include <vector>
#include <list>
#include <queue>
#include <iostream>
class Graph
{
    // undirected graph
public:
    std::unordered_map<int, std::list<int>> adjList;
    std::vector<bool> visited;

    Graph(int nodes)
    {
        visited.resize(nodes);
        visited.assign(nodes, false);
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

    void BFS(int source)
    {
        std::list<int> q;
        q.push_back(source);
        visited[source] = true;
        while(!q.empty())
        {
            std::cout << q.front() << " ";
            for(auto neighbor : adjList[q.front()])
            {
                if(!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push_back(neighbor);
                }
            }
            q.pop_front();
        }
        }

    Graph() = default;
    ~Graph() = default;
};
