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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || n == 0)
            return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode *slow = dummy, *fast = dummy;

        // Move the fast pointer 'n+1' steps ahead, so that slow is 'n' steps behind
        for(int i = 0; i <= n; ++i) {
            fast = fast->next;
        }

        // Move both slow and fast pointers until fast reaches the end
        while(fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        head = dummy->next;
        delete dummy; // Clean up the dummy node
        //return new_head;
        return head;
    }
   // return 
};