https://leetcode.com/problems/middle-of-the-linked-list/
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
    int length(ListNode* cur){
        int count = 0;
        while(cur!=NULL){
            count++;
            cur = cur->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int n = length(head);
        n = (n/2);
        while(n--) temp = temp->next;
        return temp;
    }
};