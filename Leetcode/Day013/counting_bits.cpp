// first solution
class Solution {
public:
    vector<int> countBits(int num) 
    {
        vector<int> ans;
        
        for(int i=0; i<=num; i++)
        {
            int count=0;
            int temp=i;
            
            while(temp!=0)
            {
                temp = temp&(temp-1);
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};

// dp solution
class Solution {
public:
    vector<int> countBits(int num) 
    {
        vector<int> ans(num+1,0);
        
        for(int i=1; i<=num; i++)
            ans[i] = ans[i&(i-1)]+1;
        return ans;
    }
};
