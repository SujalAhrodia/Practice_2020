class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) 
    {
        int el = nums.size()*nums[0].size();
        int n = nums[0].size();
                
        if(el != (r*c))
            return nums;
        
        vector<vector<int>> ans(r, vector<int> (c,0));
        
        for(int i=0; i<el; i++)
            //main logic
            ans[i/c][i%c] = nums[i/n][i%n];

        return ans;
    }
};
