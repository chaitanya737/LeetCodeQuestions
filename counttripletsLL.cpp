https://www.geeksforgeeks.org/count-triplets-sorted-doubly-linked-list-whose-sum-equal-given-value-x/
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};
int counttriplets(node* head , int sum){
    node* ptr1 , *ptr2 , *ptr3;
    int count = 0;
    for(ptr1 = head ; ptr1!=NULL ; ptr1 = ptr1->next){
        for(ptr2 = ptr1->next ; ptr2 !=NULL ; ptr2 = ptr2->next){
            for(ptr3 = ptr2->next ; ptr3!=NULL ; ptr3 = ptr3->next){
                if(ptr1->data + ptr2->data + ptr3->data == sum)
                count++;
            }
        }
    }
    return count;
}
void insert(node* &head , int d){
    node* temp = new node(d);
    if(head==NULL){
        head = temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

}
void printLL(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next; 
    }
}
int main(){
    node* head = NULL;
    insert(head , 9);
    insert(head,5);
    insert(head , 2);
    insert(head,10);
    insert(head,11);
    insert(head,12);
    printLL(head);
    cout<<endl;
    cout<<counttriplets(head,33);
    return 0;
}