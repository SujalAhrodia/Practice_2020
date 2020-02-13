// first solution
//remove duplicates using STL

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        
        if(nums.size()<3)
            return vector<vector<int>>();
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-2; i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int j=i+1, k=nums.size()-1;
            
            while(j<k)
            {
                int sum=nums[i] + nums[j] + nums[k];
                
                if(sum < 0)
                    j++;
                else if (sum > 0)
                    k--;
                else
                {
                    ans.push_back(vector<int> {nums[i], nums[j], nums[k]});
                    j++; k--;
                }
            }
        }

        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()),ans.end());
        
        return ans;
    }
};

// optimized using better duplicate removal

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        
        if(nums.size()<3)
            return vector<vector<int>>();
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-2; i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int j=i+1, k=nums.size()-1;
            
            while(j<k)
            {
                int sum=nums[i] + nums[j] + nums[k];
                
                if(sum < 0)
                    j++;
                else if (sum > 0)
                    k--;
                else
                {
                    ans.push_back(vector<int> {nums[i], nums[j], nums[k]});
                    
                    //skipping duplicate elements
                    while((j+1<k) && (nums[j] == nums[j+1]))
                        j++;
                    while((k-1>j) && (nums[k] == nums[k-1]))
                        k--;
                    j++; k--;
                }
            }
        }
        return ans;
    }
};
