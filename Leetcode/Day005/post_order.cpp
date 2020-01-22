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

// recursive

class Solution {
public:
    Node* helper(Node* root, vector<int>& ans)
    {
        if(!root)
            return NULL;
        
        if(root->children.size() > 0)
        {
            for(Node* i: root->children)
            helper(i, ans);
        }
        ans.push_back(root->val);
        return NULL;
    }
    
    vector<int> postorder(Node* root) 
    {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
};

// iterative

class Solution {
public:
    vector<int> postorder(Node* root) 
    {
        if(!root)
            return {}; //empty vector
        
        vector<int> ans;
        stack<Node*> s;
        
        s.push(root);
        
        while(!s.empty())
        {
            Node* top1 = s.top();
            s.pop();
            
            ans.push_back(top1->val);
            
            for(int i=0;i<top1->children.size();i++)
                s.push(top1->children[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
