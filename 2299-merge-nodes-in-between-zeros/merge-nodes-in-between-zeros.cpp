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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);  
        ListNode* newList = dummy;  
        ListNode* temp = head->next;

        int count = 0;
        while(temp != nullptr){
            if (temp->val == 0) {
                if (count > 0) {
                    newList->next = new ListNode(count);
                    newList = newList->next;
                    count = 0;
                }
            } else {
                count += temp->val;
            }
            temp = temp->next;
        }
        return dummy->next;
    }
};