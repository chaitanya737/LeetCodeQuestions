https://www.codingninjas.com/codestudio/problems/800332?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* ans = new Node<int>(-1);
    Node<int>* cur = ans;
    while(first and second) {
        if(first->data <= second->data) {
            cur->next = first;
            first=first->next;
        }
        else{
            cur->next = second;
            second = second->next;
        }
        cur = cur->next;
       
    }
    
    if(first) cur->next = first;
    if(second) cur->next = second;
    
    return ans->next;
    
}
