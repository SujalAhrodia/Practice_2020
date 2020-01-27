// first solution (wrong, as it only checks for current nodes and not the overall max and min values of a tree)
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
    bool isValidBST(TreeNode* root) 
    {
        if(!root)
            return true;
        
        if(!root->left && !root->right)
            return true;
        
        else if(!root->left)
        {
            if(root->right->val <= root->val)
                return false;
        }
        else if(!root->right)
        {
            if(root->left->val >= root->val)
                return false;
        }
        else
        {
            if( (root->left->val > root->val) || (root->right->val < root->val))
                return false;
            else
            {
                isValidBST(root->left);
                isValidBST(root->right);
            }
        }
        return true;
    }
};

// correct solution

class Solution {
public:
    bool helper(TreeNode* root, TreeNode* max, TreeNode* min)
    {
        if(!root)
            return true;
        if(max && root->val >= max->val)
            return false;
        if(min && root->val <= min->val)
            return false;
        else
            return helper(root->left, root, min) && helper(root->right, max, root);
    }
    bool isValidBST(TreeNode* root) 
    {
        return helper(root, NULL, NULL);
    }
};
