#include<bits/stdc++.h>
using namespace std;

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
//********************************************************************/
node* findMid(node* head) {
    node* slow = head;
    node* fast = head -> next;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next; 
    }
    return slow;
}
node* FindMid(node*head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
node* merge(node*left,node*right){
    if(left==NULL)return right;
    if(right==NULL)return left;

    node*ans=new node(-1);
    node*temp=ans;
    while(left!=NULL && right!=NULL){
        if(left->data<right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    while(left!=NULL){
        temp->next=left;
            temp=left;
            left=left->next;
    }
    while(right!=NULL){
         temp->next=right;
            temp=right;
            right=right->next;
    }
    ans=ans->next;
    return ans;
}

node* mergeSort(node *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL)return head;

    //step1->break ll in two halves
    node*mid=findMid(head);
    node*left=head;
    node*right=mid->next;
    mid->next=NULL;
    //recursive call for sort two halves
    left=mergeSort(left);
    right=mergeSort(right);
    //merge two sorted ll
    node*ans=merge(left,right);
    return ans;

}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node *head=new node(111);
    head->next=new node(22);
    head->next->next=new node(3);
    head->next->next->next=new node(41);
    head->next->next->next->next=new node(15);
    head->next->next->next->next->next=new node(6);
    head->next->next->next->next->next->next=new node(75);
    head=mergeSort(head);
    print(head);
    cout<<endl;
}
