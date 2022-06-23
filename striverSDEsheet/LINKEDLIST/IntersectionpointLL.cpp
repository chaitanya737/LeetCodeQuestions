https://www.codingninjas.com/codestudio/problems/630457?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int lengthLL(Node* head) {
    int l = 0;
    while(head) {
        l++;
        head = head->next;
    }
    return l;
}

int findIntersection(Node *firstHead, Node *secondHead)
{
    int dif = abs(lengthLL(firstHead) - lengthLL(secondHead));
    if(lengthLL(secondHead) > lengthLL(firstHead))
       while(dif--)    {
        secondHead = secondHead->next;
        }
    else while(dif--) firstHead = firstHead->next;
    while(firstHead and secondHead) {
        if(firstHead == secondHead) return firstHead->data;
            firstHead = firstHead->next;
            secondHead = secondHead->next;
        
    }
    return -1;

}