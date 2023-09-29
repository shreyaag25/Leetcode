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

    ListNode *detect(ListNode *head)
    {
        ListNode *slow=head, *fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return slow;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = detect(head);
        if(slow==NULL)
            return slow;
        ListNode *entry = head;
        while(slow != entry)
        {
            slow = slow->next;
            entry = entry ->next;
        }
        return slow;
    }
};