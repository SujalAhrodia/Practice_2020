// brute-force (might be missing few edge cases)

class Solution {
public:
    bool check(string s)
    {
        if(s.length()==0)
            return false;
        if(s.length()==1)
            return true;
        
        for(int i=0, j=s.length()-1; i<j; i++,j--)
        {
            if(s[i]!=s[j])
                return false;
        }
        return true;
    }
    string longestPalindrome(string s) 
    {
        string ans;
        int max=0;
        
        for(int i=0; i<s.length()-1; i++)
        {
            string sub = "";
            sub+=s[i];
            for(int j=i+1; j<s.length(); j++)
            {
                sub+=s[j];
                int len=0;
                
                if(check(sub))
                {
                    len=j-i+1;
                    if(len>max)
                    {
                        max=len;
                        ans=sub;                        
                    }
                }
            }
        }
        return ans;
    }
};


// optimized solution using dp (fillinf top-half of the table)

class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n=s.length();
        
        int dp[n][n];
        
        //initialize the diagnol (len=1)
        for(int i=0; i<n; i++)
            dp[i][i]=1;
        
        //checking for larger lengths
        for(int i=2; i<=n; i++)
        {
            for(int j=0; j<n-i+1; j++)
            {
                int k = j+i-1;
                
                if(s[j] == s[k] && i==2)
                    dp[j][k]=2;
                if(s[j] == s[k])
                    dp[j][k] = dp[j+1][k-1]+2;
                else
                    dp[j][k] = max(dp[j][k-1], dp[j+1][k]);
            }
        }
        //length of max palindromic substring
        cout<<dp[0][n-1];
        return "";
    }
};

/* 
expanding from the center

find out max odd length palindromic subtring (1 center)
find out max even length palindromic subtring (2 centers)

*/

class Solution {
public:
    string helper(string s, int low, int high)
    {
        while(low>=0 && high<s.length() && s[low]==s[high])
        {
            low--;
            high++;
        }
        return s.substr(low+1, high-low-1);
    }
    string longestPalindrome(string s) 
    {
        if(s.length()<=1)
            return s;
        
        string ans="";
        
        for(int i=0; i<s.length(); i++)
        {
            //even length
            string len1 = helper(s,i,i+1);
            
            if(len1.length()>ans.length())
                ans=len1;
            
            //odd length
            string len2 = helper(s,i,i);
            
            if(len2.length()>ans.length())
                ans=len2;
        }
        return ans;
    }
};
