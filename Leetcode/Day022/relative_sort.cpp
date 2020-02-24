// first solution
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        vector<int> ans;
        
        for(int i=0; i<arr2.size(); i++)
        {
            int count=0;
            for(int j=0; j<arr1.size(); j++)
            {
                if(arr2[i]==arr1[j])
                {
                    count++;
                    arr1[j]=-1;
                }
            }
            while(count>0)
            {
                ans.push_back(arr2[i]);
                count--;
            }
        }
        
        sort(arr1.begin(), arr1.end());
        
        for(int i=0; i<arr1.size(); i++)
        {
            if(arr1[i]>=0)
                ans.push_back(arr1[i]);
        }
        return ans;
    }
};

// second solution using hash table

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        vector<int> ans;
        
        unordered_map<int,int> mmap;
        
        for(int i=0; i<arr1.size(); i++)
            mmap[arr1[i]]++;
        
        for(int i=0; i<arr2.size(); i++)
        {
            while(mmap[arr2[i]])
            {
                ans.push_back(arr2[i]);
                mmap[arr2[i]]--;
            }
        }
        
        vector<int> temp;
        
        for(auto itr=mmap.begin(); itr!=mmap.end(); itr++)
        {
            if(itr->second!=0)
            {
                while(itr->second)
                {
                    temp.push_back(itr->first);
                    itr->second--;
                }                    
            }
        }
        
        sort(temp.begin(), temp.end());
        
        for(int i=0; i<temp.size(); i++)
            ans.push_back(temp[i]);
        
        return ans;
    }
};
