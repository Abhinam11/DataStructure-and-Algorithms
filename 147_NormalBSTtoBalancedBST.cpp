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
    void inorder(Node*root,vector<int>&ans){
        //base case
        if(root==NULL) return;
        //LNR
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    Node* inorderToBST(int s,int e,vector<int>ans){
        // base case
        if(s>e) return NULL;
        int mid=s+(e-s)/2;
        Node*root=new Node(ans[mid]);
        root->left=inorderToBST(s,mid-1,ans);
        root->right=inorderToBST(mid+1,e,ans);
        return root;
    }
    Node* balanceBST(Node*root){
        vector<int>ans;
        //store inorder->sorted value
        inorder(root,ans);

        return inorderToBST(0,ans.size()-1,ans);
    }