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
    void helper(TreeNode* root, vector<int>& ans)
    {
        if(!root)
            return;
        if(root->left)
            helper(root->left, ans);
        ans.push_back(root->val);
        if(root->right)
            helper(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        if(!root)
            return vector<int> ();
        
        vector<int> ans;
        
        helper(root, ans);
        
        return ans;
    }
};
