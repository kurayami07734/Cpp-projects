#ifndef DSU_HPP
#define DSU_HPP
#include <iostream>
#include <numeric>
#include <vector>

class DisjointSetUnion {
  int n;
  std::vector<int> par, rank;

 public:
  DisjointSetUnion(int n) : n(n) {
    par.assign(n, 0);
    rank.assign(n, 0);
    std::iota(par.begin(), par.end(), 0);
  }
  int find(int n) {
    int p = par[n];
    while (p != par[p]) {
      par[p] = par[par[p]];
      p = par[p];
    }
    return p;
  }
  void unite(int n1, int n2) {
    int p1 = find(n1), p2 = find(n2);
    if (p1 != p2) {
      if (rank[p1] > rank[p2]) {
        par[p2] = p1;
        rank[p1] += rank[p2];
      } else {
        par[p1] = p2;
        rank[p2] += rank[p1];
      }
    }
  }
};
#endif  // DSU_HPP