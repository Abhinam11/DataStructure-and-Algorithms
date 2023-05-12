#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data=data;
    left=NULL;
    right=NULL;
  }
};

class Solution{
    int findposition(int in[],int k, int n){
        for(int i=0;i<n;i++){
            if(in[i]==k) return i;
        }
        return -1;
    }
    Node* solve(int in[],int pre[], int &index,int inorderbegin,int inorderend,int n){
        //base case
        if(index>=n || inorderbegin>inorderend) return NULL;
        
        int element=pre[index++];
        Node*root=new Node(element);
        
        int position=findposition(in,element,n);
        
        root->left=solve(in,pre,index,inorderbegin,position-1,n);
        root->right=solve(in,pre,index,position+1,inorderend,n);
        
        return root;
    }
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderindex=0;
        Node*ans=solve(in,pre,preorderindex,0,n-1,n);
        return ans;
    }
};

