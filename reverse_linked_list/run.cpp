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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        ListNode* current = head->next;    
        ListNode* prev = head;
        
        while (current != NULL) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        head->next = NULL;
        return prev;
    }
};
