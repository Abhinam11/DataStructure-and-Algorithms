#include <bits/stdc++.h> 
using namespace std;
    class Node 
    {
    public : 
        int data;
        Node*left;
        Node*right;

        Node(int data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
    Node* solve(vector<int>&preorder,int mini,int maxi,int i){
        // base case
        if(i>=preorder.size()) return NULL;
        if(preorder[i]<mini || preorder[i]>maxi) return NULL;

        Node*root=new Node(preorder[i++]);
        root->left=solve(preorder,mini,root->data,i);
        root->right=solve(preorder,root->data,maxi,i);
        return root;
    }
    Node* preorderToBST(vector<int>&preorder){
        int i=0;
        return solve(preorder,INT_MIN,INT_MAX,i);
    }