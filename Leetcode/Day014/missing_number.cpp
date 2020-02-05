// brute force solution

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        
        int sum1 = n*(n+1)/2;
        
        for(int i=0; i<n; i++)
            sum1-=nums[i];
        return sum1;
    }
};

// optimized solution

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> parallel(n+1, 0);
        
        if(n>0)
        {
            for(int i=0; i<n; i++)
                parallel[nums[i]]++; 
            
            int i=0;
            for(;i<n; i++)
             {
                 if(parallel[i]==0)
                     return i;
             }
            return i;
        }
        return 0;
    }
};
