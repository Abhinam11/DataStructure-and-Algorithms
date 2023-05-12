//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
class Solution{
    void solve(Node* root,int k,int &count,vector<int>path){
        //base case
        if(root==NULL) return;
        //add current node to path
        path.push_back(root->data);
        //left
        solve(root->left,k,count,path);
        //right
        solve(root->right,k,count,path);
        //check for ksum
        int sum=0;
        for(int i=path.size()-1;i>=0;i--){
            sum+=path[i];
            if(sum==k)
            count++;
        }
        //remove last added node
        path.pop_back();
    }
  public:
    int sumK(Node *root,int k)
    {
       vector<int>path;
       int count=0;
       solve(root,k,count,path);
       return count;
    }
};

