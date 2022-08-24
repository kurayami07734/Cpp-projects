#include "../include/Trie.hpp"

#include <iostream>
#include <string>
void Trie::addWord(std::string s) {
    TrieNode *ptr = root;
    for (int i = 0; i < s.size(); i++) {
        int cur = s[i] - 'a';
        if (!ptr->children[cur]) ptr->children[cur] = new TrieNode();
        ptr = ptr->children[cur];
    }
    ptr->isEnd = true;
}

bool Trie::searchWord(std::string s) {
    TrieNode *ptr = root;
    for (int i = 0; i < s.size(); i++) {
        int cur = s[i] - 'a';
        if (!ptr->children[cur]) return false;
        ptr = ptr->children[cur];
    }
    return ptr->isEnd;
}
bool Trie::startsWith(std::string s) {
    TrieNode *ptr = root;
    for (int i = 0; i < s.size(); i++) {
        int cur = s[i] - 'a';
        if (!ptr->children[cur]) return false;
        ptr = ptr->children[cur];
    }
    return true;
}