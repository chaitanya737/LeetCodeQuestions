https://practice.geeksforgeeks.org/problems/construct-tree-1/1
// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int idx = 0;
    unordered_map<int,int> m;
    Node* solve(int in[] , int pre[] , int s , int e){
        if(s > e) return NULL;
        Node* res = new Node(pre[idx++]);
        int mid = m[res->data];
        res->left = solve(in , pre , s , mid-1);
        res->right = solve(in, pre , mid+1 , e);
    
        return res;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        for(int i = 0 ; i < n ; i++) m[in[i]] = i;
        Node* result = solve(in , pre , 0 , n-1);
        return result;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends