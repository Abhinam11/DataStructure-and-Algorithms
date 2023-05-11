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
void printInorder(Node* root)
{
    if(!root)
        return;
        
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
      map<int,map<int,vector<int>>>nodes;
      queue<pair<Node*,pair<int,int>>>q;
      vector<int>ans;
      if(root==NULL) return ans;
      q.push(make_pair(root,make_pair(0,0)));
      while(!q.empty()){
          pair<Node*,pair<int,int>>temp=q.front();
          q.pop();
          Node* frontnode=temp.first;
          int hd=temp.second.first;
          int lvl=temp.second.second;
          nodes[hd][lvl].push_back(frontnode->data);
          if(frontnode->left){
              q.push(make_pair(frontnode->left,make_pair(hd-1,lvl+1)));
          }
          if(frontnode->right){
              q.push(make_pair(frontnode->right,make_pair(hd+1,lvl+1)));
          }
      }
      for(auto i:nodes){
          for(auto j:i.second){
              for(auto k:j.second){
                  ans.push_back(k);
              }
          }
      }
      return ans;
    }
};




