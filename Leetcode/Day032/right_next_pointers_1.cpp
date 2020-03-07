// first solution (using temp vector, constant space)

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
        //marking end of level 
        q.push(NULL);
        
        //nodes on same level
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
                //linking all the nodes at same level
                int i=0;
                
                for(;i<temp.size()-1;i++)
                    temp[i]->next = temp[i+1];
                
                temp[i]->next = a;
                
                //reinitiate the vector
                temp.resize(0);
                
                if(!q.empty())
                    q.push(NULL); // remarking the end of level
            }
        }
        return root;
    }
};

// second solution (without using extra space)

class Solution {
public:
    Node* connect(Node* root) 
    {
        if(!root)
            return NULL;
        
        Node* level=root;
        
        //traverse each level
        while(level->left)
        {
            Node* temp = level;
            
            while(temp)
            {
                //connecting the child nodes
                if(temp->left && temp->right)
                    temp->left->next = temp->right;
                
                //connect child nodes of two subtrees
                if(temp->next)
                    temp->right->next = temp->next->left;
                
                //move along the list
                temp=temp->next;
            }
            level=level->left;
        }
        return root;
    }
};
