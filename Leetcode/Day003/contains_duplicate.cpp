// first solution using unordered_set (without order/hash)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> s;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(nums[i]) != s.end())
                return true;
            s.insert(nums[i]);
        }
        return false;
    }
};

// optimized solution using feature of insert function

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for( auto i : nums){
            if( !set.insert(i).second )
                return true;
        }
        return false;
    }
};
