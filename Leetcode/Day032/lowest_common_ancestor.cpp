// recursive solution
// Imp: special check for self node condition

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
    TreeNode* ans;
    bool helper(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root)
            return false;
        
        int self=0, l=0, r=0;
        
        //left subtree
        if(helper(root->left, p, q))
            l=1;
        
        //right subtree
        if(helper(root->right, p, q))
            r=1;
        
         //check current node
        if(p->val == root->val || q->val == root->val)
            self=1;
        
        //self node condition
        if(self+l+r >= 2)
            ans=root;
        
        return (self+l+r>=1);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        helper(root,p,q);
        
        return ans;
    }
};
