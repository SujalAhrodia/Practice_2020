/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    Node* helper(Node* root, vector<int>& ans)
    {
        if(!root)
            return NULL;
        ans.push_back(root->val);
        
        if(root->children.size() >0)
        {
            for(Node* i : root->children)
            helper(i, ans);
        }
        return NULL;
    }
    vector<int> preorder(Node* root) 
    {
        vector<int> ans;
        helper(root, ans);        
        return ans;
    }
};
