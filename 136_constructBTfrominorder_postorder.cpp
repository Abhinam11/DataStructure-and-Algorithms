#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 
  void createmapping(int in[],map<int,int>&nodeToindex,int n){
      for(int i=0;i<n;i++){
          nodeToindex[in[i]]=i;
      }
  }
  Node* solve(int in[],int post[],int &index,
  int inorderstart,int inorderend,int n,map<int,int>&nodeToindex){
      //base case
       if(index<0||inorderstart >inorderend){
            return NULL;
        }
        //create a root node for element
        int element=post[index--];
        Node*root=new Node(element);
        //find element index in inorder
        int position=nodeToindex[element];
        //recursive call
        root->right=solve(in,post,index,position+1,inorderend,n,nodeToindex);
         root->left=solve(in,post,index,inorderstart,position-1,n,nodeToindex);
        return root;
  }
Node *buildTree(int in[], int post[], int n) {
        int postorderindex=n-1;
        map<int,int>nodeToindex;
        // creating mapping of node to index
        createmapping(in,nodeToindex,n);
        Node* ans = solve(in,post,postorderindex,0,n-1,n,nodeToindex);
        return ans;
}