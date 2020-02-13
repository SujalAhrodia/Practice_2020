class MyQueue {
public:
    stack<int> s;
    
    /** Initialize your data structure here. */
    MyQueue() {
        this->s = s;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) 
    {
        s.push(x);    
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() 
    {
        if(this->s.empty())
            return NULL;
        
        stack<int> s1;
        
        while(!this->s.empty())
        {
            s1.push(this->s.top());
            this->s.pop();
        }
        int front = s1.top();
        s1.pop();
        
        while(!s1.empty())
        {
            this->s.push(s1.top());
            s1.pop();
        }
        return front;
    }
    
    /** Get the front element. */
    int peek() 
    {
        if(this->s.empty())
            return NULL;
        
        stack<int> s1;
        
        while(!this->s.empty())
        {
            s1.push(this->s.top());
            this->s.pop();
        }
        int front = s1.top();
        
        while(!s1.empty())
        {
            this->s.push(s1.top());
            s1.pop();
        }
        return front;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s.empty();   
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
