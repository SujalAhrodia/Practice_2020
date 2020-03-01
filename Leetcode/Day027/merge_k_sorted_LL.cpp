/*
first solution

merge 2 LL, (k-1) times.
*/

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
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        if(l1->val<=l2->val)
        {
            l1->next = merge(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if(lists.size()==0)
            return NULL;
        
        while(lists.size()>1)
        {
            lists.push_back(merge(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        
        return lists[0];        
    }
};

// optimized solution using priority_queue as a min_heap.

class Solution {
public:
    //in order to define custom comparator, you need to overload the operator function
    struct mycompare {
        bool operator()(const ListNode *l1, const ListNode *l2) {
            return l1->val > l2->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        // priority queue to implement min_heap
        priority_queue <ListNode*, vector<ListNode*>, mycompare> minheap;
        
        ListNode* head = new ListNode(0);
        ListNode* prev = head;
        
        for(int i=0; i<lists.size(); i++)
        {
            //pushing first elements of each list in minheap
            if(lists[i])
                minheap.push(lists[i]);
        }
        
        while(!minheap.empty())
        {
            prev->next = minheap.top();
            minheap.pop();
            
            prev=prev->next;
            
            //pushing next element in the minheap
            if(prev->next)
                minheap.push(prev->next);
            
        }
        return head->next;
    }
};
