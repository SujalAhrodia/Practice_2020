// first solution (brute-force)

class MovingAverage {
    queue<int> m;
    int window;
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        window=size;
    }
    
    double next(int val) 
    {
        if(m.empty() || (m.size() < window))
            m.push(val);
        else 
        {
            m.pop();
            m.push(val);
        }

        double sum=0;
        queue<int> temp = m;
        
        while(!temp.empty())
        {
            sum+=temp.front();
            temp.pop();
        }
        
        return sum/m.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
 
// optimized solution

class MovingAverage {
    queue<int> m;
    int window;
    double sum=0;
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        window=size;
    }
    
    double next(int val) 
    {
        if(m.size() == window)
        {
            sum-=m.front();
            m.pop();
        }            
        m.push(val);
        sum+=val;
        
        return sum/m.size();
    }
};
 
// a bit more optimized just by explicit conversion

class MovingAverage {
    queue<int> m;
    int window;
    int sum=0;
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        window=size;
    }
    
    double next(int val) 
    {
        if(m.size() == window)
        {
            sum-=m.front();
            m.pop();
        }            
        m.push(val);
        sum+=val;
        
        return sum*1.0/m.size();
    }
};
