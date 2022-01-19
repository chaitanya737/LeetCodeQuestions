https://practice.geeksforgeeks.org/problems/level-order-traversal/1
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* createNode(){
    node* root = NULL;
    int d;
    cin>>d;
    if(d == -1) return root;
    else{
        root = new node(d);
        root->left = createNode();
        root->right = createNode();
    }
    return root;
}
void LevelOrder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        auto x = q.front();
        q.pop();
        if(x!=NULL){
            cout<<x->data<<" ";
            if(x->left!=NULL) q.push(x->left);
            if(x->right!=NULL) q.push(x->right); 
        }
        else{
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
    }
}
int main(){
    node* root = NULL;
    root = createNode();
    LevelOrder(root);
    return 0;
}