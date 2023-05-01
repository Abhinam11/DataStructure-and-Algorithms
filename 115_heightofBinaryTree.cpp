#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
int height(node* root){
   // base case
   if(root==NULL){
    return 0;
   }
   //recursive call
   int h1=height(root->left);
   int h2=height(root->right);
   return max(h1,h2)+1;
class node{
    public:
    int data;
    node*left;
    node*right;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};}