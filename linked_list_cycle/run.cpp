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
    bool hasCycle(ListNode *head) {
        if (head == NULL)
            return false;
        
        ListNode* one = head;
        ListNode* two = head;
        
        while (one && two) {
            one = one->next;
            two = two->next;
            
            if (two != NULL) {
                two = two->next;
            }
            else return false;
            
            if (one == two) {
                return true;
            }
        }
        return false;
    }
};
