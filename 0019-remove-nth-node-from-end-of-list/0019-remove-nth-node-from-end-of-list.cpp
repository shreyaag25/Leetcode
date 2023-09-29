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
    // ListNode* removeNthFromEnd(ListNode* head, int n) {

    //     //APPROACH 1 - BRUTE FORCE
    //     if(head== NULL || (head->next == NULL && n==1))
    //         return NULL;
    //     int count =0;
    //     ListNode *temp = head;
    //     while(temp!=NULL)
    //     {
    //         count++;
    //         temp = temp->next;
    //     }
    //     int k = count - n+1;
    //     int c=1;
    //     temp = head;
    //     if(k==c)
    //     {
    //         head = head->next;
    //         delete temp;
    //         return head;
    //     }
    //     while(c<k-1)
    //     {
    //         temp = temp->next;
    //         c++;
    //     }
    //     ListNode *t = temp->next;
    //     temp->next = t->next;
    //     delete (t);
    //     return head;
    // }


//APPROACH 2 - TWO POINTER APPROACH
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode ();
        dummy->next = head;
        ListNode *fast = dummy;
        ListNode *slow = dummy;
        while(n--)
            fast = fast->next;
        while(fast->next!=NULL)
        {
            slow= slow->next;
            fast=fast->next;
        }
        ListNode *temp = slow ->next;
        slow->next = slow->next->next;
        delete(temp);
        return dummy->next;
    }
};