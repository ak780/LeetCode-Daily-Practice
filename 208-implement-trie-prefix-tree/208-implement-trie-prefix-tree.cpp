class Trie {
// private:
    struct Node {
        Node* children[26] = {nullptr};
        bool is_word = false;
    };
    Node* root = new Node;
public:
    /** Initialize your data structure here. */
    Trie() {}
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        auto curr = root;
        
        for (auto ch : word) {
            if (!curr->children[ch - 'a']) {
                curr->children[ch - 'a'] = new Node;
            }
            curr = curr->children[ch - 'a'];
        }
        curr->is_word = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        auto curr = root;
        
        for (auto ch : word) {
            if (!curr->children[ch - 'a']) {
                return false;
            }
            curr = curr->children[ch - 'a'];
        }
        return curr->is_word;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        auto curr = root;
        
        for (auto ch : prefix) {
            if (!curr->children[ch - 'a']) {
                return false;
            }
            curr = curr->children[ch - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */