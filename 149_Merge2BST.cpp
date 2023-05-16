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
void inorder(Node* root,vector<int> &ans){
    //base case
    if(root==NULL) return ;
    //LNR
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

vector<int>MergeArrays(vector<int>& a,vector<int>& b){
    vector<int>ans(a.size()+b.size());

    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans[k++]=a[i++];
        }
        else{
            ans[k++]=b[j++];
        }
    }
    while(i<a.size()){
        ans[k++]=a[i++];
    }
    while(j<b.size()){
        ans[k++]=b[j++];
    }
    return ans;
}

Node* InorderToBST(int s,int e,vector<int>ans){
    //base case
    if(s>e) return NULL;
    int mid=s+(e-s)/2;
    Node*root=new Node(ans[mid]);
    root->left=InorderToBST(s,mid-1,ans);
    root->right=InorderToBST(mid+1,e,ans);
    return root;
}
Node* mergeBST(Node* root1,Node* root2){
    //step1: inorder store
    vector<int>bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);

    //step2: merge two sorted arrays
    vector<int>mergedArray=MergeArrays(bst1,bst2);

    //step3: inorder to BST
    return InorderToBST(0,mergedArray.size()-1,mergedArray);
}
