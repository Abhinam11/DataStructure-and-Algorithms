#include <bits/stdc++.h> 
using namespace std;
/*************************************************************/

    

  //  Following is the Binary Tree node structure:

 

    class TreeNode{

 

        public :

            int data;

            TreeNode *left;

            TreeNode *right;

 

            TreeNode(int data) {

                this -> data = data;

                left = NULL;

                right = NULL;

            }

 

            ~TreeNode() {

            if (left){

            delete left;

            }

 

            if (right){

            delete right;

            }

        }   

    };

 

/*************************************************************/

 

// function to convert BST to Doubly Linked List

void convertTOList(TreeNode*root, TreeNode*&head){

 

    if(!root)return;

 

    convertTOList(root->right, head);

 

    root->right=head;

 

    if(head){

        head->left=root;

    }

    head=root;

 

    convertTOList(root->left, head);

}