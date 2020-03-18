/* Intuition

 So the key here is to find the lower bound for upcoming nodes, which equals to find p.

1. Looking for the trend of numbers, if it’s decreasing, it’s still traversing the left child node all the way down, 
   we push the value into stack. 
2. When we read a value greater than the last one, we know the current value belongs to a right node 
   (let it be rc: right child) of one of the previous nodes (let it be p) we pushed to stack, in other words, p is a 
   parent node of the current node rc. Due to the property of preorder traversal, p’s value is pushed to stack before 
   its left subtree nodes.
3. So to find the parent node, we pop all the nodes in its left subtree, and the last popped node whose value is smaller 
   than rc is rc’s parent p, whose value becomes the lower bound. 
4. Then we keep reading the serialized array, in any case we see any value not greater than the lower bound, 
   we return false. Lower bound is updated whenever we read a right child node’s value.
*/
class Solution {
public:
    bool verifyPreorder(vector<int>& preorder) 
    {
        stack<int> st;
        int thres=0;
        
        for(int i=0; i<preorder.size(); i++)
        {
            //while decreasing trend
            if(st.empty() || preorder[i] < preorder[i-1])
            {
                //breaking condition
                if(preorder[i] <= thres)
                    return false;
                st.push(preorder[i]);
            }
            else
            {
                //finding the parent node and setting lower bound
                while(!st.empty() && st.top()<preorder[i])
                {
                    thres=st.top();
                    st.pop();
                }
                st.push(preorder[i]);
            }
        }
        return true;
    }
};
