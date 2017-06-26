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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL)
            return NULL;
        else if (head->next == NULL)
            return (head->val == val) ? NULL : head;
            
        ListNode* current = head;
        ListNode* prev = NULL;
        
        while (head != NULL && head->val == val) {
            prev = head;
            current = head = head->next;
        }
        
        while (current != NULL) {
            if (current->val == val && prev != NULL) {
                while (current != NULL && current->val == val)
                    current = current->next;
                    
                prev->next = current;
                prev = current;
                current = (current != NULL) ? current->next : NULL;
            }
            else {
                prev = current;
                current = current->next;
            }
        }
        
        return head;
    }
};
