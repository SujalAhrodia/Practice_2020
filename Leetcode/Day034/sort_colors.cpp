// first solution (2 pass, using constant extra space)

class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        vector<int> count(3, 0);
        
        //counting the occurrence
        for(int i=0; i<nums.size(); i++)
            count[nums[i]]++;
        
        int j=0;
        for(int i=0; i<3; i++)
        {
            while(count[i]>0)
            {
                nums[j++]=i;
                count[i]--;                
            }
        }
    }
};

// optimized solution (1 pass)

class Solution {
public:
    void swap(vector<int>& nums, int a, int b)
    {
        int temp = nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
    }
    void sortColors(vector<int>& nums) 
    {
        int i=0, j=nums.size()-1, curr=0;
        
        while(curr<=j)
        {
            if(nums[curr]==0)
            {
                swap(nums, i, curr);
                i++; curr++;
            }
            else if(nums[curr]==2)
            {
                swap(nums, j, curr);
                j--;
            }
            else
                curr++;
        }
    }
};
