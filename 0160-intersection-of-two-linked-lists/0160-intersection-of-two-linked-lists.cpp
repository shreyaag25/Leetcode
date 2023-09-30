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
//approach 1
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if(headA == NULL || headB == NULL)
        return NULL;
    ListNode *a = headA;
    ListNode *b = headB;
    while(a!=b)
    {
        if(a==NULL)
            a = headB;
        else
            a = a->next;
        if(b==NULL)
            b = headA;
        else
            b = b->next;
    }
    return a;
}



// approach 2

    // ListNode *floydIntersection(ListNode *head)
    // {
    //     ListNode *fast = head, *slow = head;
    //     if(head==NULL)
    //         return NULL;
    //     while(slow && fast)
    //     {
    //         fast= fast->next;
    //         if(fast!=NULL)
    //             fast= fast->next;
    //         slow = slow ->next;
    //         if(slow==fast)  
    //             return slow;
    //     }
    //     return NULL;
    // }
    // ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //     ListNode *tail= headA;
    //     //tail is the last node
    //     while(tail->next)
    //         tail=tail->next;
    //     //creating loop
    //     tail->next = headA;
    //     //get intersection node by detecting the loop using the headB
    //     ListNode *slow = floydIntersection(headB);
    //     if(slow==NULL)
    //     {
    //         tail->next = NULL;
    //         return NULL;
    //     }
    //     ListNode *fast =slow;
    //     slow = headB;
    //     while(slow != fast)
    //     {
    //         slow=slow->next;
    //         fast=fast->next;
    //     }
    //     tail->next = NULL;
    //     return slow;
        
    // }
};