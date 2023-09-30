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
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 1;
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *temp = head;
        while(temp->next!=NULL)
        {
            count++;
            temp=temp->next;
        }
        temp->next = head;
        int c = count - (k%count) - 1;
        temp = head;
        while(c--)
        {
            temp= temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
        
    }
};