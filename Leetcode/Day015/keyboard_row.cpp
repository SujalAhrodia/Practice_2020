class Solution {
public:
    bool finding(unordered_set<char> v, char str)
    {
        str=tolower(str);
        if(v.find(str) != v.end())
            return true;
        return false;
    }
    
    bool check(unordered_set<char> v, string temp)
    {
        for(int i=1; i<temp.length(); i++)
        {
            if(!finding(v,temp[i]))
                return false;
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) 
    {
        unordered_set<char> l1 = {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> l2 = {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> l3 = {'z','x','c','v','b','n','m'};
        
        vector<string> res;
        
        for(int i=0; i<words.size(); i++)
        {
            bool a=false,b=false,c=false;
            
            a = finding(l1, words[i][0]);
            b = finding(l2, words[i][0]);            
            c = finding(l3, words[i][0]);            
            
            if(a)
            {
                if(check(l1,words[i]))
                    res.push_back(words[i]);
            }
            else if(b)
            {
                if(check(l2,words[i]))
                    res.push_back(words[i]);   
            }
            else
            {
                if(check(l3,words[i]))
                    res.push_back(words[i]);
            }
        }
        return res;
        
    }
};
