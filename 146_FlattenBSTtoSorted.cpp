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
    Node* Flatten(Node*root){
        vector<int>ans;
        //store inorder --> sorted value
        inorder(root,ans);
        int n=ans.size();
        Node*head=new Node(ans[0]); 
        Node*curr=head;
        //2nd step
        for(int i=1;i<n;i++){
            Node*temp=new Node(ans[i]);
            curr->left=NULL;
            curr->right=temp;
            curr=temp;
        }
        //3rd step
        curr->left=NULL;
        curr->right=NULL;

        return head;
    }