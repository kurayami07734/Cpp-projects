#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#include "../include/Trie.hpp"

int main() {
    Trie t;
    t.addWord("app");
    t.addWord("apple");
    cout << boolalpha << t.startsWith("ab") << endl;
}