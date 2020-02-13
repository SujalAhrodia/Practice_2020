// first solution
class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) 
    {
        int ans=0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++)
        {
            int j=i+1, k=nums.size()-1;
            
            while(j<k)
            {
                if(nums[i] + nums[j] + nums[k] < target)
                {
                    ans+=k-j;
                    j++;
                }
                else
                    k--;
            }
        }
        
        return ans;
    }
};

// optimized (adding once case to save computation time)

class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) 
    {
        int ans=0;
        
        if(nums.size() == 0)
            return 0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++)
        {
            int j=i+1, k=nums.size()-1;
            
            while(j<k)
            {
                if(nums[i] + nums[j] + nums[k] < target)
                {
                    ans+=k-j;
                    j++;
                }
                else
                    k--;
            }
        }
        
        return ans;
    }
};
