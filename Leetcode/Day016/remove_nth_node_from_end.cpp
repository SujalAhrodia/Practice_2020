// 2 pass solution

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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(!head)
            return NULL;
        
        int len=0, target=0;
        
        ListNode* temp=head;
        
        while(temp)
        {
            len++;
            temp=temp->next;
        }
        if(len==1)
            return NULL;
        
        target = len-n+1;
    
        temp = head;
        ListNode* prev=temp;
        
        while(temp->next)
        {
            target--;
            
            if(target==0)
            {
                temp=temp->next;
                if(prev==head && prev->next==temp)
                    head=temp;
                else
                    prev->next = temp;
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }
        
        if(target>0)
            prev->next=NULL;
        
        return head;
    }
};

/* 1 pass solution
start with dummy pointer pointing to the head, and two equal pointers
move fast pointer n times (i.e. pointing to the target node)
move fast node to the end and simultaneously moving slow pointer

at this point, the slow->next points to the target node; just point to the next node

and return the dummy->next

*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(!head)
            return NULL;
        
        ListNode* main = new ListNode(-1);
        main->next = head;
        ListNode* slow = main;
        ListNode* fast = slow;
        
        while(n--)
            fast=fast->next;
        
        while(fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        
        return main->next;
    }
};
