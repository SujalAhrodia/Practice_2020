// recursive solution 
// time: O(n)
// mem: O(n)

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(!root)
            return NULL;
        
        int parent = root->val;
        int val1 = p->val;
        int val2 = q->val;
        
        if(val1 < parent && val2 < parent)
            return lowestCommonAncestor(root->left, p, q);
        else if(val1 > parent && val2 > parent)
            return lowestCommonAncestor(root->right, p, q);
        else
            return root;
    }
};


// iterative solution
// time: O(n)
// mem: O(1)

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(!root)
            return NULL;
        
        while(root)
        {
            int parent = root->val;
            int val1 = p->val;
            int val2 = q->val;

            if(val1 < parent && val2 < parent)
                root=root->left;
            else if(val1 > parent && val2 > parent)
                root=root->right;
            else
                return root;
        }
        return NULL;
    }
};
