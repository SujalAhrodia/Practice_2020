// first solution 
/*
1 pass: calulate product
2 pass: calculate arr[i] by arr[i] = product/arr[i]
*/

// general solution without division

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int prod=1;
        vector<int> res, left, right;
        
        //product from left side
        for(int i=0; i<nums.size(); i++)
        {
            left.push_back(prod);
            prod*= nums[i];
        }
        
        //reinitialise
        prod=1;

        //product from right side
        for(int i=nums.size()-1; i>=0; i--)
        {
            right.push_back(prod);
            prod*= nums[i];
        }
        
        //calculate arr[i] by left*right (of the same i)
        
        for(int i=0; i<nums.size(); i++)
            res.push_back(left[i] * right[nums.size() - 1 -i]);
        
        return res;        
    }
};
