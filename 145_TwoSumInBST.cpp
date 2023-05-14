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
void inorder(Node* root,vector<int>&ans){
    // base case
    if(root==NULL) return;
    //LNR
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
bool twoSumInBST(Node* root, int target) {
    vector<int>ans;
    inorder(root,ans);
    int i=0;
    int j=ans.size()-1;
    while(i<j){
        int sum=ans[i]+ans[j];
        if(sum==target) return true;
        if(sum>target) j--;
        else i++;
    }
    return false;
}