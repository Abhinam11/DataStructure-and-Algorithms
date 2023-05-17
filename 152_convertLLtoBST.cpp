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

TreeNode*lltoBST(TreeNode*&head,int n){

 

    if(n<=0  || head==nullptr)return nullptr;

 

    TreeNode*left =lltoBST(head,  n/2);

    

    TreeNode*root =head;

 

    root->left=left;

 

    head=head->right;

 

    root->right =lltoBST(head, n-n/2-1);

 

    return root;

    

    

}
 