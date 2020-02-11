class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        unordered_map<int, int> occur, count;
        
        int ans=0, deg=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(count[nums[i]]==0)
            {
                count[nums[i]]=1;
                occur[nums[i]]=i;
            }
            //maximum degree element
            if(++count[nums[i]] > deg)
            {
                deg = count[nums[i]];
                ans = i - occur[nums[i]] + 1;
            }
            //multiple elements with same degree
            else if(count[nums[i]] == deg)
                ans = min(ans, i-occur[nums[i]]+1);
        }
        return ans;
    }
};
