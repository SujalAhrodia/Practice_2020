// kadane's algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int max_curr = nums[0], max_so_far = nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            max_curr = max(nums[i],max_curr + nums[i]);
            max_so_far = max(max_curr, max_so_far);
        }
        return max_so_far;
    }
};
