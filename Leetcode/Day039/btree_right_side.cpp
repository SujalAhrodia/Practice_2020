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
    vector<int> rightSideView(TreeNode* root) 
    {   
        if(!root)
            return {};
        
        vector<int> ans;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        vector<int> temp;
        
        while(!q.empty())
        {
            TreeNode* top = q.front();
            q.pop();
            
            if(top)
            {
                temp.push_back(top->val);
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
            }
            else
            {
                ans.push_back(temp.back());
                
                temp.resize(0);
                
                if(!q.empty())
                    q.push(NULL);
            }
        }
        return ans;
    }
};
