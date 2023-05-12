#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node*right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

class Solution
{
    public:
    void flatten(Node *root)
    {
        Node* current=root;
        while(current!=NULL){
            if(current->left){
                Node*pred=current->left;
                while(pred->right){
                    pred=pred->right;
                }
                pred->right=current->right;
                current->right=current->left;
                current->left=NULL;    
            }
                current=current->right;
        }
        // left part NULL
        // current=root;
        // while(current!=NULL){
        //     current->left=NULL; 
        //     current=current->right;
        // }
    }
};