// first solution

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        vector<int> ans;
        
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]%2==0)
                ans.push_back(A[i]);
        }
        
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]%2==1)
                ans.push_back(A[i]);
        }
        
        return ans;   
    }
};

// cleaner solution
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        vector<int> even, odd;
        
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]%2==0)
                even.push_back(A[i]);
            else
                odd.push_back(A[i]);
        }
        
        for(int i=0; i<odd.size(); i++)
            even.push_back(odd[i]);
        
        return even;   
    }
};

// in-place solution (low memory cost)
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        int i=0, j=A.size()-1;
        
        while(i<j)
        {
            if(A[i]%2==1 && A[j]%2==0)
            {
                int temp = A[i];
                A[i]=A[j];
                A[j]=temp;
            }
            if(A[i]%2==0)
                i++;
            if(A[j]%2==1)
                j--;
        }
        
        return A;   
    }
};
