#ifndef TRIE_HPP
#define TRIE_HPP
#include <string>
struct TrieNode
{
    bool isEnd;             // denote whether a word ends here
    TrieNode *children[26]; // can have 26 children at max
    TrieNode()
    {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }
    void addWord(std::string s);
    bool searchWord(std::string s);
    bool startsWith(std::string s);
};

#endif // TRIE_HPP