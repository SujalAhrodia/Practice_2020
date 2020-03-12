
class LRUCache {
public:
    //doubly linked list
    struct Node
    {
        int key;
        int val;
        Node* prev;
        Node* next;
        Node(int k, int v) : key(k), val(v), next(NULL), prev(NULL) {};
    };

    unordered_map<int,Node*> mmap;
    Node* head;
    Node* tail;
    int maxi=0;
    
    LRUCache(int capacity) 
    {
        head = new Node(0,0);
        tail = new Node(0,0);
        
        head->next=tail;
        tail->prev=head;
        maxi=capacity;
    }
    
    int get(int key) 
    {
        auto itr = mmap.find(key);
        
        if(itr!=mmap.end())
        {
            //moving from the list
            Node* temp = mmap[key];
            
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            
            //moving to the front
            insert(temp);
            
            return temp->val;
        }
        return -1;
    }
    
    void insert(Node* curr)
    {
        Node* temp;
        
        temp=head->next;
        head->next=curr;
        curr->next=temp;
        temp->prev=curr;
        curr->prev=head;
    }
    
    void put(int key, int value) 
    {
        //setting value
        if(mmap.find(key)!=mmap.end()) 
        {
            //moving from the list
            Node* temp = mmap[key];
            
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            mmap.erase(temp->key);
            delete temp;
        }
        
        //capacity
        else if(mmap.size()==maxi)
        {
            //delete LR
            Node* temp = tail->prev;
                
            temp->prev->next = tail;
            tail->prev = temp->prev;
            
            mmap.erase(temp->key);
            delete temp;
        }
        Node* curr = new Node(key, value);
        
        //insert at front
        insert(curr);
        mmap.insert({key,curr});
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
