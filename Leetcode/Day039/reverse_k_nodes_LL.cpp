// recursive solution
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
    ListNode* helper(ListNode* root, int k)
    {
        ListNode* prev;
        ListNode* temp=root;
        
        while(k--)
        {
            temp=temp->next;
            root->next=prev;
            prev=root;
            root=temp;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int count=0;
        ListNode* curr = head;
        
        while(count<k && curr)
        {
            curr=curr->next;
            count++;
        }
        
        if(count == k)
        {
            //reverse k nodes LL
            ListNode* rev_head = helper(head, k);
            
            head->next = reverseKGroup(curr, k);
            return rev_head;
        }
        return head;
    }
};

//iterative

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int len=0;
        ListNode* temp=head;
        
        while(temp)
        {   
            len++;
            temp=temp->next;
        }
        
        ListNode* dummy = new ListNode(-1);
        ListNode* prev=dummy;
        
        dummy->next=head;
        
        //multiples of 'k'
        for(int i=0; i<len/k; i++)
        {
            //reverse k nodes
            for(int j=1; j<k; j++)
            {
                ListNode* curr = prev->next;
                prev->next = head->next;
                head->next = head->next->next;
                prev->next->next = curr;
            }
            prev=head;
            head=head->next;
        }
        return dummy->next;
    }
};
