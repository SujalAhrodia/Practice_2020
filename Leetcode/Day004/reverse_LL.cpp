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
    ListNode* reverseList(ListNode* head) 
    {
        if(!head)
            return NULL;
        
        ListNode* prev = NULL;
        ListNode* curr=head;
        
        while(head->next)
        {
            curr=head->next;
            head->next = prev;
            prev=head;
            head=curr;
        }
        head->next=prev;
        return head;
    }
};
