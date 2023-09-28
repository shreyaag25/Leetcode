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

 //can also use slow and fast pointer - approach 2
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        //OPTIMAL SOLUTION
        struct ListNode *slow = head;
        struct ListNode *fast = head;
        while(fast!=NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast ->next->next;
        }
        return slow;


        // better approach
        // struct ListNode *temp=head;
        // int c=0;
        // while(temp!=NULL)
        // {
        //     c++;
        //     temp=temp->next;
        // }
        // int mid = (c/2);
        // while(mid)
        // {
        //     head = head->next;
        //     mid--;
        // }
        // return head;


    }
};