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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        if(!root)
            return vector<vector<int>> ();
        
        queue<TreeNode*> q;
        q.push(root);
        
        //marking the end of level
        q.push(NULL);
        
        vector<vector<int>> ans;
        vector<int> temp;
        int toggle=1;
        
        while(!q.empty())
        {
            TreeNode* a = q.front();
            q.pop();
            
            if(a)
            {
                temp.push_back(a->val);
                if(a->left)
                    q.push(a->left);
                if(a->right)
                    q.push(a->right);
            }
            else
            {
                if(toggle==1)
                {
                    ans.push_back(temp);
                    toggle=0;
                }
                else
                {
                    reverse(temp.begin(), temp.end());
                    ans.push_back(temp);
                    toggle=1;
                }
                
                temp.resize(0);
                
                if(!q.empty())
                    q.push(NULL);
            }
        }
        return ans;
    }
};
