#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

class Solution {
    void traverseleft(Node*root,vector<int>&ans){
        //base case ->exclusive->leaf nodes
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
            traverseleft(root->left,ans);
        }
        else{
            traverseleft(root->right,ans);
        }
    }
    
    void traverseleaf(Node*root,vector<int>&ans){
        // base case
        if(root==NULL) return ;
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }

            traverseleaf(root->left,ans);
            traverseleaf(root->right,ans);
        
    }
    
    void traverseright(Node*root,vector<int>&ans){
        // base case->exclusive->leaf nodes
        if((root==NULL) || (root->left==NULL && root->right==NULL)) return;
        
        if(root->right){
            traverseright(root->right,ans);
        }
        else{
            traverseright(root->left,ans);
        }
        ans.push_back(root->data);
    }
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        
        vector<int>ans;
        if(root==NULL) return ans;
        
        ans.push_back(root->data);
        
        //leftpart->print->exclusive->leafnodes
        traverseleft(root->left,ans);
        //print leafnodes
        //left subtree ki leafnodes
        traverseleaf(root->left,ans);
        //right subtree ki leafnodes
        traverseleaf(root->right,ans);
        //rightpart->reverse->print->exclusive->leafnodes
        traverseright(root->right,ans);
        
        return ans;
    }
};

