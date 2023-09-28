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
    void reverseLL(ListNode* &head,ListNode* &curr,ListNode* &prev)
    {
        if(curr==NULL)
        {
            head = prev;
            return;
        }
        struct ListNode *forward = curr->next;
        reverseLL(head, forward, curr);
        curr->next = prev;
    }
    ListNode* reverseList(ListNode* head) {
        struct ListNode *prev = NULL;
        struct ListNode *curr = head;
        // while(curr!=NULL)
        // {
        //     struct ListNode *forward = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr= forward;
        // }
        // return prev;

        reverseLL(head, curr, prev);
        return head;
    }
};