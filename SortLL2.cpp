https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/submissions/
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head or !head->next) return head;
        
        
        ListNode* prev = new ListNode(-1);
        prev->next = head;
        ListNode* dummy = prev;
        
        while(head and head->next) {
            
            if(head->val == head->next->val) {
                while(head->next and head->val == head->next->val) head = head->next;
                prev->next = head->next;
            }
            
            else {
                prev = prev->next;
            }
            
            
            
            head = head->next;
        }
        return dummy->next;
    }
};