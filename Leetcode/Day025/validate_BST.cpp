/*
you can work with INT_MAX/INT_MIN, the only reason of using LONG here is the case when the root's val is INT_MAX.
*/

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
    bool helper(TreeNode* root, long max, long min)
    {
        if(!root)
            return true;
        if((root->val >= max) || (root->val <= min))
            return false;
        
        return helper(root->left, root->val, min) && helper(root->right, max, root->val);
    }
    bool isValidBST(TreeNode* root) 
    {
        return helper(root, LONG_MAX, LONG_MIN);
    }
};
