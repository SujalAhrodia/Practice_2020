//first solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int count=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
                nums[count++] = nums[i];
        }
        while(count<nums.size())
        {
            nums[count++]=0;
        }
    }
};

//optimized solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int count=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
                count++;
        }
        nums.erase(std::remove(nums.begin(), nums.end(), 0),nums.end());
        
        for(int i=0; i<count; i++)
            nums.push_back(0);
    }
};
