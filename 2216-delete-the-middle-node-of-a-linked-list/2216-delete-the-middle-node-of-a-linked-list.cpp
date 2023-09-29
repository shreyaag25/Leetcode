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
    ListNode * getNode (ListNode* head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *dummy = new ListNode ();
        dummy->next = slow;
        while(fast && fast->next)
        {
            slow = slow->next;
            dummy= dummy->next;
            fast = fast->next->next;
        }
        return dummy;

        
    }

    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return NULL;
        ListNode *dummy = getNode(head);
        ListNode *temp = dummy->next;
        dummy->next = temp->next;
        delete(temp);
        return head;
    }
};