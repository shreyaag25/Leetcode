/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head== NULL || k ==1)
            return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *prev = dummy, *curr = dummy, *forward = dummy;
        int count = 0;
        while(curr->next)
        {
            count++;
            curr = curr->next;
        }
        while(count>=k)
        {
            curr = prev->next;
            forward = curr->next;
            for(int i = 1;i<k; i++)
            {
                curr->next = forward->next;
                forward->next = prev->next;
                prev->next = forward;
                forward = curr->next;
            }
            prev = curr;
            count -=k;
        }
        return dummy->next;
    }
};