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
    void helper(TreeNode* root, int& sum)
    {
        if(root->left)
        {
            if(!root->left->left && !root->left->right)
                sum+=root->left->val;
            else
                helper(root->left, sum);
        }
        if(root->right)
            helper(root->right, sum);
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        int sum=0;
        
        if(!root)
            return 0;
        
        helper(root, sum);
        
        return sum;    
    }
};
