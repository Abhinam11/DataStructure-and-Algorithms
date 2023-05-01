#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
class Solution {
    // Function to return the diameter of a Binary Tree.
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
    int diameter(Node* root) {
        // base case
        if(root==NULL){
            return 0;
        }
        //recursive call
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left)+1+height(root->right);
        
        int ans=max(op1,max(op2,op3));
        return ans;
    }

     pair<int,int> diameterFast(Node* root) {
        //base case
        if(root == NULL) {
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int,int> ans;
        ans.first = max(op1, max(op2, op3));;
        ans.second = max(left.second , right.second) + 1;

        return ans;
    }
    int diameter(Node* root) {
    
        return diameterFast(root).first;
        
    }
};