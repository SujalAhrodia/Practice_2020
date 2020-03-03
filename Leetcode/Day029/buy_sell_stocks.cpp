// first solution O(n^2)

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit=0;
        
        if(prices.size()<2)
            return 0;
        
        for(int i=0; i<prices.size()-1; i++)
        {
            for(int j=i+1; j<prices.size(); j++)
            {
                if(prices[j]-prices[i] > profit)
                    profit = prices[j]-prices[i];
            }
        }
        return profit;
    }
};

// optimized solution O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit=0, min=INT_MAX;
        
        if(prices.size()<2)
            return 0;
        
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i]<min)
                min=prices[i];
            else if(prices[i] - min > profit)
                profit = prices[i] - min;
        }
        return profit;
    }
};
