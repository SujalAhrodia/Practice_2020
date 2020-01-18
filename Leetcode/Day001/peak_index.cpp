// first solution

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) 
    {
        int max=-1, index=0;
        
        for(int i=0; i<A.size(); i++)
        {
            if(A[i] > max)
            {   
                max=A[i]; index=i;
            }
        }
        return index;
    }
};

// optimized solution 

// binary search

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) 
    {
        int start=0, end=A.size()-1, ans=0;
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            if((A[mid] > A[mid-1]) && (A[mid] > A[mid+1]))
            {
                ans=mid;
                break;
            }
            if(A[mid] > A[mid-1])
                start=mid+1;
            else
                end=mid-1;
        }
        return ans;
    }
};
