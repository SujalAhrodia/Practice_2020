// first solution (n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        vector<int>::iterator itr;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[j] == (target-nums[i]))
                {
                    ans.push_back(i); ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

// optimized solution (logn) using maps

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        map<int,int> mmap;

        for(int i=0; i<nums.size(); i++)
        {
            if( mmap.find(target-nums[i]) != mmap.end())
                ans.push_back(mmap[target-nums[i]]); ans.push_back(i); 
            mmap[nums[i]]=i;
        }
        return ans;
    }
};

// further memory optimization | dynamic vector declaration

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        map<int,int> mmap;
        
        for(int i=0; i<nums.size(); i++)
        {
            if( mmap.find(target-nums[i]) != mmap.end())
                return vector {mmap[target-nums[i]],i};
            mmap[nums[i]]=i;
        }
        
        return ans;
    }
};
