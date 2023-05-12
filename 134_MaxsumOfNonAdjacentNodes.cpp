#include<bits/stdc++.h> 
using namespace std; 

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution{
    pair<int,int> solve(Node* root){
        //base case
        if(root==NULL) {
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        // recursive call
        pair<int,int>left=solve(root->left);
        pair<int,int>right=solve(root->right);
        
        pair<int,int>ans;
        ans.first=root->data+left.second+right.second;
        ans.second=max(left.first,left.second)+max(right.second,right.first);
        return ans;
    }
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
       pair<int,int>ans;
       ans=solve(root);
       return max(ans.first,ans.second);
    }
};

