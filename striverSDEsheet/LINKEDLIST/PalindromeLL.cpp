https://www.codingninjas.com/codestudio/problems/799352?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
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

bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int> *temp = head;
    stack<int> s;
    while(temp){
        s.push(temp->data);
        temp = temp->next;
    }
    
    while(head){
        int i = s.top();
        s.pop();
        if(i !=head->data) return false;
        
        head = head->next;
    }
    
return true;
}