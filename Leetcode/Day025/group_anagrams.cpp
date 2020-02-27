//optimized solution

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> ans;
        
        unordered_map<string, vector<string>> mmap;
        
        for(int i=0; i<strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mmap[temp].push_back(strs[i]);
        }
        
        for(auto itr: mmap)
            ans.push_back(itr.second);
        
        return ans;
    }
};
