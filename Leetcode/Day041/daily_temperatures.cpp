// brute force solution (giving TLE)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) 
    {
        if(T.size()<2)
            return {0};
        
        vector<int> ans;
        
        for(int i=0; i<T.size(); i++)
        {
            int j=i+1;
            
            for(; j<T.size(); j++)
            {
                if(T[j]>T[i])
                    break;
            }
            if(j==T.size())
                ans.push_back(0);
            else
                ans.push_back(j-i);
        }
        return ans;
    }
};

// optimized solution (stack)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) 
    {
        //<element, position>
        stack<pair<int,int>> st;
        
        vector<int> ans(T.size(), 0);
        
        for(int i=T.size()-1; i>=0; i--)
        {
            while(!st.empty() && T[i] >= st.top().first)
                st.pop();
            
            if(st.empty())
                ans[i]=0;
            else
                ans[i] = st.top().second-i;
            
            st.push({T[i], i});
        }
        return ans;
    }
};
