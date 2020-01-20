// first solution

class Solution {
public:
    vector<int> diStringMatch(string S) 
    {
        int N=S.size();
        int maxi=N, mini=0;
        
        vector<int> ans(N+1,0);
        
        int j=0;
        for(char i : S)
        {
            if(i=='I')
                ans[j]=mini++;
            else
                ans[j]=maxi--;
            j++;
        }
        ans[N]=maxi;
        return ans;
    }
};
