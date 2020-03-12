class TrieNode
{
  public: 
    TrieNode *child[26];
    bool isend;
    
    TrieNode()
    {
        isend=false;
        
        for(int i=0; i<26; i++)
            child[i]=NULL;
    }
};

class Trie 
{
    private:
        TrieNode* root;
    
    public:
    /** Initialize your data structure here. */
    Trie() 
    {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) 
    {
        TrieNode* curr=root;
        int index=0;
        
        for(int i=0; i<word.length(); i++)
        {
            index=word[i]-'a';
            if(!curr->child[index])
                curr->child[index] = new TrieNode();
            
            curr = curr->child[index];    
        }
        curr->isend=true;        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) 
    {
        TrieNode* curr=root;
        int index=0;
        
        for(int i=0; i<word.length(); i++)
        {
            index=word[i]-'a';
            
            if(!curr->child[index])
                return false;
            
            curr = curr->child[index];    
        }
        return curr->isend;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) 
    {
        TrieNode* curr=root;
        int index=0;
        
        for(int i=0; i<prefix.length(); i++)
        {
            index=prefix[i]-'a';
            if(!curr->child[index])
                return false;
            
            curr=curr->child[index];
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
