#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(){
        data = 0;
        left = right = NULL;
    }
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
      //base case
      if(root==NULL) return root;
      
      if(root->data==n1 || root->data==n2) return root;
      
      //recursive call
      Node* leftans=lca(root->left,n1,n2);
      Node* rightans=lca(root->right,n1,n2);
      
      if(leftans!=NULL && rightans!=NULL) return root;
      
      else if(leftans!=NULL && rightans==NULL) return leftans;
      
      else if(leftans==NULL && rightans!=NULL) return rightans;
      
      else return NULL;
        
    }
};

