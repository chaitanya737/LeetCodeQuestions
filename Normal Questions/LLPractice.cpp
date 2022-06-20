#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        data = d;
        next = NULL;
    }
};
void InserAtFront(node* &head , node* &tail , int d){
    node* n = new node(d);
    if(head == NULL) head = tail = n;
    else{
        n->next = head;
        head = n;
    }
}
void InsertAttail(node* &head , node* &tail , int d){
    node* n = new node(d);
    if(head == NULL) head = tail = n;
    else{
        node* temp = head;
        while(temp->next != NULL) temp = temp->next;
        temp->next = n;
    }
}
bool searchLL(node* head , int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key) return true;
        temp = temp->next;
    }
    return false;
}
void reverseLL(node* &head){
    node* cur = head;
    node* prev = NULL , *n = NULL;
    while(cur != NULL){
        n = cur->next;
        cur->next = prev;
        prev = cur;
        cur = n;
    }
    head = prev;
}
void PrintLL(node *head){
    while(head != NULL){
        cout<<head->data << " ";
        head = head->next;
    }
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    InserAtFront(head,tail,5);
    InserAtFront(head,tail,10);
    InserAtFront(head,tail,11);
    InserAtFront(head,tail,15);
    InsertAttail(head , tail , 20);
    PrintLL(head);
    cout<<endl;
    // bool val = searchLL(head , 20);
    // cout<<val;
    reverseLL(head);
    PrintLL(head);

    return 0;
}