// not sure if this is not reversing the list.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* ans = NULL;
        ListNode* prev = ans;
        
        stack<int> s1, s2;
        
        while(l1)
        {
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            s2.push(l2->val);
            l2=l2->next;
        }
        int carry=0;
        
        while(!s1.empty() || !s2.empty() || carry)
        {
            if(!s1.empty())
            {
                carry+=s1.top(); s1.pop();
            }
            
            if(!s2.empty())
            {
                carry+=s2.top(); s2.pop();
            }
            ans= new ListNode(carry%10);
            carry=carry/10;
            
            ans->next=prev;
            prev=ans;
        }
        return ans;
    }
};
