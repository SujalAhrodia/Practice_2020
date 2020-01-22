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
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* temp;
        
        while(curr->next)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        curr->next=prev;
        
        return curr;
    }
};
