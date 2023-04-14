#include <bits/stdc++.h> 

        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        };
//**************************************************/

bool isCircular(Node* head){
    // Write your code here.
      if(head==NULL)return true;          
    Node*temp=head->next;
    while(temp!=head && temp!=NULL){
        // if(temp==NULL)
        // return false;
        temp=temp->next;
    }
    //return true;
    if(temp==NULL)return false;
    if(temp==head)return true;
}