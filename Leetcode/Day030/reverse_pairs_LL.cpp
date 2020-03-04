// first solution (recursive):
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
    ListNode* swapPairs(ListNode* head) 
    {
        if(!head || !head->next)
            return head;
        
        ListNode* first = head;
        ListNode* second = head->next;
        
        first->next = swapPairs(second->next);
        second->next = first;
        
        return second;
    }
};

// optimized solution (iterative):
class Solution {
public:
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode* ans = new ListNode(0);
        ans->next = head;
        
        ListNode* prev = ans;
        
        while(head && head->next)
        {
            ListNode* first = head;
            ListNode* second = head->next;
            
            prev->next = second;
            first->next = second->next;
            second->next = first;
            
            prev = first;
            head = first->next;
        }
        return ans->next;
    }
};
