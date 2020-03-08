// first solution

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        auto itr = find(nums.begin(), nums.end(), target);
        
        if(itr!=nums.end())
        {
            return itr-nums.begin();
        }            
        else
            return -1;
    }
};

// second solution (using modified binary search) : similar time complexity

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {   
        int n=nums.size();
        
        if(!n)
            return -1;
        
        int start=0, end=n-1;
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            if(nums[mid] == target)
                return mid;
            
            else if(nums[mid] < nums[start])
            {
                if(target>nums[mid] && target<=nums[end])
                    //right
                    start=mid+1;
                else
                    //left
                    end=mid-1;
            }
            else
            {
                if(target<nums[mid] && target>=nums[start])
                    //left
                    end=mid-1;
                else
                    //right
                    start=mid+1;
            }
        }
        return -1;
    }
};
