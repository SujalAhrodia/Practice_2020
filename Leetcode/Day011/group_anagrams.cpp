/*
sort the elements
group all the sorted elements 
how?
the idea is to use a data structure which can map the multiple elements to the same value (i.e. their sorted form will always bbe the same)
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector< vector<string>> ans;
        
        unordered_map<string, vector<string>> mmap;
        
        for(int i=0; i<strs.size(); i++)
        {
            string temp=strs[i];
            sort(temp.begin(), temp.end());
            mmap[temp].push_back(strs[i]);            
        }
        for(auto i : mmap)
            ans.push_back(i.second);
        return ans;
    }
};
