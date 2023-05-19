#include<bits/stdc++.h>
using namespace std;
// User Function template for C++

// Structure of node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
    int countNodes(Node*root){
        //base case
        if(root==NULL) return 0;
        int ans=1+countNodes(root->left)+countNodes(root->right);
        return ans;
    }
    bool isCBT(Node*root,int index,int cnt){
        //base case
        if(root==NULL) return true;
        
        if(index>cnt) return false;
        
        else{
            bool left=isCBT(root->left,2*index,cnt);
            bool right=isCBT(root->right,2*index+1,cnt);
            return left && right;
        }
    }
    bool isMaxOrder(Node*root){
        //if leaf Node
        if(root->right==NULL && root->left==NULL) return true;
        //if left child
        if(root->right==NULL) return (root->data>root->left->data);
        //both child
        else{
            bool left=isMaxOrder(root->left);
            bool right=isMaxOrder(root->right);
            return (left && right && (root->data>root->left->data && root->data>root->right->data));
        }
    }
 
  public:
    bool isHeap(struct Node* tree) {
        int index=1;//1 based indexing
        int totalnodes=countNodes(tree);
        if(isCBT(tree,index,totalnodes) && isMaxOrder(tree))
        return true;
        else
         return false;
        
    }
};