// first solution

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        for(int i=0; i<n; i++)
            nums1[m+i] = nums2[i];
        sort(nums1.begin(), nums1.end());
    }
};

// using 2 pointers (similar time complexity)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int a = m-1, b = n-1, c = m+n-1;
        
        while(a>=0 && b>=0)
            nums1[c--] = (nums1[a] > nums2[b]) ? nums1[a--]: nums2[b--];

        while(b>=0)
            nums1[c--] = nums2[b--];
    }
};
