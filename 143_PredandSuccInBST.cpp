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
pair<int,int> predandSucc (Node* root, int key)
{
    int pred=-1;
    int succ=-1;
    Node*Temp=root;
    //find key
    while(Temp->data!=key){
        if(Temp->data>key){
            succ=Temp->data;
            Temp=Temp->left;
        }
        else{
            pred=Temp->data;
            Temp=Temp->right;
        }
    }
    //pred and succ
    Node* leftTree=Temp->left;
    while(leftTree!=NULL){
        pred=leftTree->data;
        leftTree=leftTree->right;
    }
    Node* rightTree=Temp->right;
    while(rightTree!=NULL){
        succ=rightTree->data;
        rightTree=rightTree->left;
    }

    pair<int,int>ans=make_pair(pred,succ);
    return ans;
}