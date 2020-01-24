// first better solution

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int start=INT_MAX, max_d = 0;
        
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i] < start)    
                start = prices[i];
            
            int diff = prices[i] - start;
            
            if(diff >=0 && (diff>max_d))
                max_d=diff;
        }
        
        return max_d;
    }
};

// second solution similar to Kadane's algorithm

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int max_curr=0, max_so_far = 0;
        
        for(int i=1; i<prices.size(); i++)
        {
            max_curr = max(0, max_curr + prices[i] - prices[i-1]);
            max_so_far = max(max_curr, max_so_far);
        }
        
        return max_so_far;
    }
};
