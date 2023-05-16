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

 

// merge two sorted Linked lists

TreeNode* mergedList(TreeNode*head1,TreeNode*head2){

 

    TreeNode* head=nullptr;

    TreeNode* tail =nullptr;

 

    while(head1 && head2){

 

        if(head1->data<head2->data){

 

            if(head==nullptr){

 

                head=head1;

                tail=head1;

                head1=head1->right;

            }

            else{

                

                tail->right=head1;

                head1->left=tail;

                tail=head1;

                head1=head1->right;

 

            }

        }

 

        else{

 

            if(head==nullptr){

 

                head=head2;

                tail=head2;

                head2=head2->right;

            }

            else{

 

                tail->right=head2;

                head2->left=tail;

                tail=head2;

                head2=head2->right;

 

            }

        }

    }

 

    while(head1){

        

        tail->right=head1;

        head1->left=tail;

        tail=head1;

        head1=head1->right;

 

    }

 

    while(head2){

 

        tail->right=head2;

        head2->left=tail;

        tail=head2;

        head2=head2->right;

 

    }

    return head;

}

 

int count_nodes(TreeNode*head){

    

    TreeNode*temp=head;

    int count=0;

 

    while(temp){

        count++;

        temp=temp->right;

    }

    return count;

}

 

TreeNode*lltoBST(TreeNode*&head,int n){

 

    if(n<=0  || head==nullptr)return nullptr;

 

    TreeNode*left =lltoBST(head,  n/2);

    

    TreeNode*root =head;

 

    root->left=left;

 

    head=head->right;

 

    root->right =lltoBST(head, n-n/2-1);

 

    return root;

    

    

}

 

TreeNode *mergeBST(TreeNode *root1, TreeNode *root2){

    // Write your code here.

 

    // Convert BST TO Doubly

 

    TreeNode* head1=nullptr;

    convertTOList(root1, head1);

    head1->left=nullptr;

 

    TreeNode* head2=nullptr;

    convertTOList(root2, head2);

    head2->left=nullptr;

 

    // Merge the two Linked Lists

 

    TreeNode*mergedHead = mergedList(head1, head2);

 

    // merge the two BST's

    return lltoBST(mergedHead, count_nodes(mergedHead)); 

}