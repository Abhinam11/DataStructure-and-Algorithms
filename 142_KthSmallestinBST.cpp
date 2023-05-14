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
int kthSmallest(Node* root, int k) {
    vector<int>ans;
    inorder(root,ans);
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }
    if(k<=ans.size())
    return ans[k-1];
    else return -1;
}