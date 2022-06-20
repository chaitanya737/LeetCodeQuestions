https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/
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
    int length(ListNode* head){
        int l = 0;
        while(head) {
            l++;
            head = head->next;
        }
        return l;
    } 
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prev = NULL;
        ListNode* n = NULL;
        ListNode* cur = head;
        int c = 0;
        if(!head or !head->next or k == 1 or k == 0) return head;
        if(length(head)<k) return head;
        while(c<k and cur!=NULL){
            n = cur->next;
            cout<<head->val<<" ";
            cur->next = prev;
            prev = cur;
            cur = n;
            c++;
        }
        if(n != NULL)
        head->next = reverseKGroup(n, k);
        
        return prev;
        
    }
};