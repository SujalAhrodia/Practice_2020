/*
You can start from bottom-up, by computing the coins for 1->2->3... and so on until the given 'amount'

sub-optimal problem: if (amount-coin[i]) is solved, you could use that to compute current value.
*/
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int> dp (amount+1,-1);
        dp[0]=0;
        
        for(int i=1; i<=amount; i++)
        {
            for(int c : coins)
            {
                if((i-c>=0) && (dp[i-c]!=-1))
                {
                    if(dp[i]<0)
                        dp[i] = dp[i-c]+1;
                    else
                        dp[i] = min(dp[i], dp[i-c]+1);
                }
            }
        }
        
        return dp[amount];
    }
};
