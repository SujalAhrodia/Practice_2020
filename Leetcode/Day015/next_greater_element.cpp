// first solution
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        vector<int>::iterator itr;
        
        for(int i=0; i<nums1.size(); i++)
        {
            itr = find(nums2.begin(), nums2.end(), nums1[i]);
            
            int index = distance(nums2.begin(), itr);
            
            bool flag=false;
            
            for(int j=index; j<nums2.size(); j++)
            {
                if(nums2[j]>nums1[i])
                {
                    flag=true;
                    ans.push_back(nums2[j]);
                    break;
                }
            }
            if(!flag)
                ans.push_back(-1);
        }
        return ans;
    }
};

//using stack and map (NGE problem)

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        unordered_map<int,int> mmap;
        
        stack<int> st;
        
        for(int i=0; i<nums2.size(); i++)
        {
            while(st.size() && st.top() < nums2[i])
            {
                mmap[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        
        for(int i=0; i<nums1.size(); i++)
        {
            auto itr = mmap.find(nums1[i]);
            if(itr != mmap.end())
                ans.push_back(itr->second);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};
