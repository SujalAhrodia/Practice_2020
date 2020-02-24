// first solution

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        vector<int> ans;
        
        for(int i=0; i<A.size(); i++)
            ans.push_back(A[i]*A[i]);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};

// a bit optimized

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        vector<int> ans;
        
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]<0)
                A[i]=-A[i];
        }
        sort(A.begin(), A.end());
        
        for(int i=0; i<A.size(); i++)
            ans.push_back(A[i]*A[i]);
        
        return ans;
    }
};

// optimized solution (2 pointer)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        int n= A.size();
        
        // important initialization (will give null pointer exception)
        vector<int> ans(n);
        
        int i=0, j=n-1;

        for(int k=n-1; k>=0; k--)
        {
            if(abs(A[i]) > abs(A[j]))
                ans[k]=A[i]*A[i++];
            else
                ans[k]=A[j]*A[j--];
        }
        
        return ans;
    }
};
