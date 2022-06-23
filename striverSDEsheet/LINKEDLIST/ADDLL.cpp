https://leetcode.com/problems/add-two-numbers/submissions/
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

Node *addTwoNumbers(Node *head1, Node *head2)
{
   Node* ans = new Node(0);
    Node* cur = ans;
    int sum = 0;
    int carry = 0;
    while(head1 || head2){
        sum = (head1?head1->data:0) + (head2?head2->data:0) + carry;
        carry = sum/10;
        sum = sum%10;
        cur->next = new Node(sum);
        cur = cur->next;
       if(head1) head1 = head1->next;
        if(head2) head2 = head2->next;
    }
    if(carry>0) cur->next = new Node(carry);
    return ans->next;
}