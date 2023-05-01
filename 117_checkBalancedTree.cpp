#include <bits/stdc++.h>
using namespace std;


// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};


class Solution{
    int height(Node* root){
        //base case
        if(root==NULL){
            return 0;
        }
        //recursive calls
        int h1=height(root->left);
        int h2=height(root->right);
        
        return max(h1,h2)+1;
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  base case
        if(root==NULL){
            return true;
        }
        //recursive calls
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool diff=abs(height(root->left)-height(root->right))<=1;
        
        if(left && right && diff){
            return true;
        }
        else{
            return false;
        }
    }
      pair<bool,int> Balanced(Node * root){
        // base case
        if(root==NULL){
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
        pair<bool,int>left=Balanced(root->left);
        pair<bool,int>right=Balanced(root->right);
        
        bool op1=left.first;
        bool op2=right.first;
        bool op3=abs(left.second-right.second)<=1;
        
        pair<bool,int> ans;
        ans.second=max(left.second,right.second)+1;
        if(op1 && op2 && op3){
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    bool isBalanced(Node *root)
    {
        
       return Balanced(root).first;
    }
};


