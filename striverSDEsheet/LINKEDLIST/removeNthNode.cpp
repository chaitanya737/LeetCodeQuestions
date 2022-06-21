https://www.codingninjas.com/codestudio/problems/799912?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

int lengthLL(LinkedListNode<int> *head) {
    int l = 0;
    while(head){
        l++;
        head=head->next;
    }
    return l;
}

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(!head) return head;
    if(K == 0) return head;
    int x = lengthLL(head);
    x = x - K;
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *cur = head;
    if(x == 0) return head->next;
    while(x--) {
        prev = cur;
        cur = cur->next;
    }
    
    prev->next = cur->next;
    return head;
    
}