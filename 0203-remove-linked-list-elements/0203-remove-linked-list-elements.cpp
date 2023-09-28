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
    ListNode* removeElements(ListNode* head, int val) {
        struct ListNode *temp;
        if(head==NULL)
            return head;
        while(head!=NULL && head->val == val)
        {
            temp = head;
            head=head->next;
            delete(temp);
        }
        struct ListNode * prev = head;
        struct ListNode *curr = head;
        while(curr!=NULL)
        {
            if(curr->val == val)
            {
                struct ListNode *t =curr;
                prev ->next = curr->next;
                curr = curr->next;
                delete(t);
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};