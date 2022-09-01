#include "../include/Graph.hpp"

#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>

std::vector<bool> Graph::getVisited() { return visited; }

std::unordered_map<int, std::list<int>> Graph::getAdjList() { return adjList; }


Graph::Graph(std::vector<std::pair<int,int>> edges, int nodes) {
    visited.resize(nodes);
    visited.assign(nodes, false);
    for(std::pair<int,int> p : edges) {
        addEdge(p.first, p.second);
    }
}

void Graph::addEdge(int u, int v) {
    adjList[v].push_back(u);
    adjList[u].push_back(v);
}

void Graph::DFS(int source) {
    visited[source] = true;
    std::cout << source << " ";
    for (auto it = adjList[source].begin(); it != adjList[source].end(); it++)
        if (!visited[*it]) DFS(*it);
}

void Graph::BFS(int source) {
    std::list<int> q;
    q.push_back(source);
    visited[source] = true;
    while (!q.empty()) {
        std::cout << q.front() << " ";
        for (auto neighbor : adjList[q.front()]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push_back(neighbor);
            }
        }
        q.pop_front();
    }
}

bool Graph::cycleCheckBFS(int source) {
    std::queue<std::pair<int,int>> q;
    visited[source] = true;
    q.push({source, -1});
    while(!q.empty()) {
        int node = q.front().first;
        int pre = q.front().second;
        q.pop();
        for(int it : adjList[node])
        {
            if(!visited[it]) {
                visited[it] = true;
                q.push({it, node});
            }
            else if(pre != it)
                return true;
        }
    }
    return false;
}

bool Graph::hasCycleBFS() {
    for(int i = 0; i <= visited.size(); i++) {
        if(!visited[i]) {
            if(cycleCheckBFS(i))
                return true;
        }
    }
    return false;
}