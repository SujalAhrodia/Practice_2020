// first solution
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, vector<int>& t)
    {
        if(!root)
            return;
        if(!root->left && !root->right)
            t.push_back(root->val);
        if(root->left)
            helper(root->left, t);
        if(root->right)
            helper(root->right, t);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> t1, t2;
        helper(root1, t1);
        helper(root2, t2);
        
        return (t1==t2);
    }
};

// just a bit optimized in terms of memory (using string to store the sequence)

class Solution {
public:
    void helper(TreeNode* root, string& s )
    {
        if(!root)
            return;
        if(!root->left && !root->right)
            s+=to_string(root->val);
        if(root->left)
            helper(root->left, s);
        if(root->right)
            helper(root->right, s);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        string s1, s2;
        helper(root1, s1);
        helper(root2, s2);
        
        return (s1==s2);
    }
};
