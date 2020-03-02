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
    void helper(TreeNode* root, vector<vector<int>>& ans)
    {
        if(!root)
            return;
        
        queue<TreeNode*> q;
        
        q.push(root);
        q.push(NULL); //marking end of a level
        
        vector<int> temp;
        
        while(!q.empty())
        {
            TreeNode* first = q.front();
            q.pop();
            
            if(first)
            {
                temp.push_back(first->val);
                if(first->left)
                    q.push(first->left);
                if(first->right)
                    q.push(first->right);
            }
            else
            {
                ans.push_back(temp);
                temp.resize(0);
                if(q.size()>0)
                    q.push(NULL); //replacing the marker 
            }
        }
            
    }
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(!root)
            return vector<vector<int>> ();
        
        vector<vector<int>> ans;
        
        helper(root, ans);
        
        return ans;
    }
};
