//first solution

class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int> ans;
        
        int div=n/2;
        
        if(n%2==0)
        {
            for(int i=-div; i<=div; i++)
            {
                if(i!=0)
                    ans.push_back(i);
            }
        }
        else
        {
            for(int i=-div; i<=div; i++)
                ans.push_back(i);
        }
        return ans;
    }
};

// optimized solution

class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int> ans;
        
        int div=n/2;
        
        for(int i=-div; i<=div; i++)
        {
            if(n%2==0 && i==0)
                continue;
            ans.push_back(i);
        }
        
        return ans;
    }
};
