// first solution

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int count1[26] ={0}, count2[26] ={0};
        
        for(int i=0; i<s.length(); i++)
            count1[s[i]-'a']++;
        for(int i=0; i<t.length(); i++)
            count2[t[i]-'a']++;
        
        for(int i=0; i<26; i++)
        {
            if(count1[i] != count2[i])
                return false;
        }
        
        return true;
    }
};

// using map

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        map<char,int> mmap;
        
        if(s.length() != t.length())
            return false;
        
        for(int i=0; i<s.length(); i++)
        {
            mmap[s[i]]++;
            mmap[t[i]]--;
        }

        for(auto i : mmap)
        {
            if(i.second !=0 )
                return false;
        }
        return true;
    }
};
