/* Intuition

When we build a node in the tree, we compared the two numbers a and b.
In this process,
the smaller one is removed and we won't use it anymore,
and the bigger one actually stays.

The problem can translated as following:
Given an array A, choose two neighbors in the array a and b,
we can remove the smaller one min(a,b) and the cost is a * b.
What is the minimum cost to remove the whole array until only one left?

*/

class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) 
    {
        int ans=0;
        
        vector<int> st={INT_MAX};
        
        for(int i: arr)
        {
            //removing the min element at the cost of product 
            while(st.size() && st.back() <= i)
            {
                int temp = st.back();
                st.pop_back();
                
                ans+=temp*min(st.back(), i);
            }
            //finally putting in the max value
            st.push_back(i);
        }

        for(int i=2; i<st.size(); i++)
            ans+=st[i-1]*st[i];
        
        return ans;
    }
};
