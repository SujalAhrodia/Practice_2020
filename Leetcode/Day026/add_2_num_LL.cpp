//first solution
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
        ListNode* head = new ListNode(0);
        ListNode* prev = head;
        
        ListNode* t1=l1;
        ListNode* t2=l2;
        
        int sum=0, carry=0;
        
        while(t1 || t2)
        {
            int x = (t1) ? t1->val : 0;
            int y = (t2) ? t2->val : 0;

            ListNode* temp = new ListNode(-1);
            
            sum=carry+x+y;
            carry=sum/10;
            
            temp->val= sum % 10;
            
            prev->next=temp;
            prev=prev->next;
            
            if(t1)
                t1=t1->next;
            
            if(t2)
                t2=t2->next;
        }  
        if(carry>0)
            prev->next = new ListNode(carry);
        return head->next;        
    }
};

// a bit concise solution
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* head = new ListNode(-1);
        ListNode* prev = head;
        
        int carry=0;
        
        while(l1 || l2 || carry)
        {
            if(l1)
            {
                carry+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                carry+=l2->val;
                l2=l2->next;
            }
            
            prev->next = new ListNode(carry%10);
            prev=prev->next;
            carry=carry/10;
        }
        return head->next;
    }
};
