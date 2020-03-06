// first solution

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    Node* connect(Node* root) 
    {
        if(!root)
            return NULL;
        
        queue<Node*> q;
        q.push(root);
        
        //marking end of each level
        q.push(NULL);
        
        vector<Node*> temp;
        
        while(!q.empty())
        {
            Node* a = q.front();
            q.pop();
            
            if(a)
            {
                temp.push_back(a);
                
                if(a->left)
                    q.push(a->left);
                if(a->right)
                    q.push(a->right);
            }
            else
            {
                //link all nodes in temp
                int i=0;
                for(; i<temp.size()-1; i++)
                    temp[i]->next=temp[i+1];

                temp[i]->next=a;
                
                temp.resize(0);
                
                //next level elements
                if(!q.empty())
                    q.push(NULL); 
            }
        }

        return root;
    }
};
