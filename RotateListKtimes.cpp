https://leetcode.com/problems/rotate-list/
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
    
    ListNode* solve(ListNode* head) {
        ListNode* cur = head;
        while(cur->next->next) cur = cur->next;
        
        ListNode* n = cur->next;
        
        cur->next = NULL;
        n->next = head;
        
        return n;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;
        ListNode* ans = head;
        
        ListNode* cur = head;
        int count = 1;
        while(cur->next) {
            cur = cur->next;
            count++;
     }
       k = k % count;  //K bohot bada agar hoga toh usko chota kardo vrna TLE Aaega
        cout << k <<" ";
        
        while(k--) {
            ans = solve(ans);
        }
        return ans;
    }
};