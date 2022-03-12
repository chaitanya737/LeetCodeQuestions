https://leetcode.com/problems/copy-list-with-random-pointer/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node* , Node*> m;
    Node* copyRandomList(Node* head) {
        Node* p = head;
        //Hmne Copy Bnali
        while(p) {
            m[p] = new Node(p->val);
            p = p->next;
        }
        //Hum pointers ko bhi point krlenge
        p = head;
        while(p) {
            m[p]->next = m[p->next];
            m[p]->random = m[p->random];
            p = p->next;
        }
        
        return m[head];
    }
};