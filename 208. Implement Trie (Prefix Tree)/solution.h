#include <vector>
#include <string>

using namespace std;

const int max_n = 26;

class Trie {
public:
    bool is_word;
    Trie* next[max_n];
    
    /** Initialize your data structure here. */
    Trie() {
        is_word = NULL;
        memset(next, 0, sizeof(next));
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* cur = this;
        for (char w : word) {
            if (cur->next[w - 'a'] == NULL) {
                Trie* new_node = new Trie();
                cur->next[w - 'a'] = new_node;
            }
            cur = cur->next[w - 'a'];
        }
        cur->is_word = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* cur = this;
        for (char w : word) {
            if (cur != NULL)
                cur = cur->next[w - 'a'];
        }
        return cur != NULL && cur->is_word;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* cur = this;
        for (char w : prefix) {
            if (cur != NULL)
                cur = cur->next[w - 'a'];
        }
        return cur != NULL;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */