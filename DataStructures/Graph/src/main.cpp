#include <iostream>

#include "../include/Graph.hpp"
using namespace std;

int main() {
    vector<pair<int, int>> edges = {{1, 2},  {2, 4}, {3, 5},  {5, 6}, {5, 10},
                                    {10, 9}, {9, 8}, {8, 11}, {7, 8}, {6, 7}};
    Graph g(edges, 11);
    cout << boolalpha << g.hasCycleBFS() << endl;
    return 0;
}