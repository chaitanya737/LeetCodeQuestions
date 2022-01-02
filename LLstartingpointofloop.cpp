https://leetcode.com/problems/linked-list-cycle-ii/
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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL or head->next == NULL) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) break;
        }
        if(slow == head){
            return head;
        }
        else if(slow == fast){
            slow = head;
            while(slow->next != fast->next){
                slow = slow->next;
                fast = fast->next;
            }
            return slow->next;
        }
        return NULL;
    }
};