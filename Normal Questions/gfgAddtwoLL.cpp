https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1
// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    struct Node* reverse1(Node* cur){
        Node* prev = NULL , *n = NULL;
        while(cur!=NULL){
            n = cur->next;
            cur->next = prev;
            prev = cur;
            cur = n;
            }
            return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse1(first);
        second = reverse1(second);
        Node* res = new Node(0);
        Node* cur = res;
        int carry = 0;
        while(first != NULL || second!=NULL){
            int x = (first!=NULL)?first->data:0;
            int y = (second!=NULL)?second->data:0;
            int sum = x + y + carry;
            carry = sum/10;
            cur->next = new Node(sum%10);
            cur = cur->next;
            if(first!=NULL) first = first->next;
            if(second!=NULL) second = second->next;
        }
        if(carry>0) cur->next = new Node(carry);
        res = res->next;
        res = reverse1(res);
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends