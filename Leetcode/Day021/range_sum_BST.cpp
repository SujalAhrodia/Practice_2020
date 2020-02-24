// first solution (using single function)

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
    int sum=0;
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        if(!root)
            return 0;
        
        if(root->val>=L && root->val<=R)
            sum+=root->val;
        
        rangeSumBST(root->left,L,R);
        rangeSumBST(root->right,L,R);
         
        return sum;
    }
};

// using helper function and no global var

class Solution {
public:
    int helper(TreeNode* root, int& sum, int L, int R)
    {
        if(!root)
            return 0;
        
        if(root->val>=L && root->val<=R)
            sum+=root->val;
        
        helper(root->left, sum, L, R);
        helper(root->right, sum, L, R);
        
        return sum;
    }
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        if(!root)
            return 0;
        int sum=0;
        
        return helper(root,sum, L, R);
    }
};

// optimized solution

class Solution {
public:
    int helper(TreeNode* root, int& sum, int L, int R)
    {
        if(!root)
            return 0;
        
        if(root->val>=L && root->val<=R)
            sum+=root->val;
        
        if(root->val > L)
            helper(root->left, sum, L, R);
        
        if(root->val < R)
            helper(root->right, sum, L, R);
        
        return sum;
    }
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        if(!root)
            return 0;
        int sum=0;
        
        return helper(root,sum, L, R);
    }
};
