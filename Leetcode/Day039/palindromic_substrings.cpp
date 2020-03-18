// first solution : dp

class Solution {
public:
    int countSubstrings(string s) 
    {
        if(!s.length())
            return 0;
        
        int ans=0;
        vector<vector<bool>> dp (s.length(), vector<bool> (s.length(), false));
        
        //length 1
        for(int i=0; i<s.length(); i++)
         {
            dp[i][i]=true;ans++;
         }
        
        for(int i=2; i<=s.length(); i++)
        {
            for(int j=0; j<s.length()-i+1; j++)
            {
                int k=i+j-1;
                
                if(s[j] == s[k] && i==2)
                    dp[j][k]=true;
                else
                {
                    if(s[j]==s[k])
                        dp[j][k]=dp[j+1][k-1];
                }
                
                if(dp[j][k])
                    ans++;
            }
        }
        return ans;
    }
};

// optimized solution: expand around the center

class Solution {
public:
    void helper(string s, int start, int end, int& ans)
    {
        while(start>=0 && end<=s.length() && s[start]==s[end])
        {
            start--;
            end++;
            ans++;
        }
    }
    int countSubstrings(string s) 
    {
        if(!s.length())
            return 0;
        
        int ans=0;
        
        for(int i=0; i<s.length(); i++)
        {
            //even length
            helper(s, i, i+1, ans);
            
            //odd length
            helper(s, i, i, ans);
        }
        return ans;
    }
};
