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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //     if(headA==NULL||headB==NULL)return NULL;
    //     ListNode *d1 = headA;
    //     ListNode *d2 = headB;
    //     while(d1!=d2)
    //     {
    //         d1 = d1==NULL?headB:d1->next;
    //         d2 = d2==NULL?headA:d2->next;
    //     }
    //     return d1;
    // }
        // ListNode *d1 = headA;
        // ListNode *d2 = headB;
        // if(headA==NULL||headB==NULL)
        //     return NULL;
        // while(d1!=d2)
        // {
        //     d1=d1->next;
        //     d2=d2->next;
        //     if(d1==NULL)
        //     {
        //         d1=headB;
        //     }
        //     else
        //         d2=headA;
        // }
        // return d1;
    // }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    ListNode *d1=headA;
    ListNode *d2=headB;
        if(headA==NULL||headB==NULL)
            return NULL;
    while(d1!=d2)
    {
        if(d1==NULL) d1=headB;
        else d1=d1->next;
        if(d2==NULL) d2=headA;
        else d2=d2->next;
    }
    return d1;
}
};