// first solution

class Solution {
public:
    string helper(map<string, int>& count)
    {
        int maxi=-1;
        string ans;
        
        map<string, int>::iterator itr;
        
        for(itr=count.begin(); itr!=count.end(); itr++)
        {
            if(itr->second > maxi)
            {
                maxi=itr->second;
                ans=itr->first;
            }
        }
        count.erase(ans);
        return ans;
    }
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        vector<string> ans;
        
        map<string, int> count;
        
        for(int i=0; i<words.size(); i++)
            count[words[i]]++;
        
        while(k--)
        {
            string temp = helper(count);
            ans.push_back(temp);
        }
        return ans;
    }
};

// second solution (using priority queue)

class Solution {
public:
    struct mycomp
    {
        bool operator()(const pair<string, int>& a, const pair<string, int>& b)
        {
            if(a.second == b.second)
                return a.first > b.first;
            else
                return b.second > a.second;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        map<string, int> count;
        vector<string> ans;
        
        for(int i=0; i<words.size(); i++)
            count[words[i]]++;
        
        priority_queue<pair<string, int>, vector<pair<string,int>>, mycomp> q(count.begin(), count.end());
        
        while(k--)
        {
            ans.push_back(q.top().first);
            q.pop();
        }
        return ans;
    }
};
