#include <bits/stdc++.h> 
using namespace std;
class LinkedListNode{
 public:
 int data;
 LinkedListNode* next=NULL;
    LinkedListNode(int d){
        data=d;
        next=NULL;
    }

};
// APPROACH
LinkedListNode*reverseLinkedList(LinkedListNode *head) 
{
    // Write your code here
    if(head==NULL)
        return head;
        if(head->next==NULL){
        return head;
    }
    LinkedListNode* prev=NULL;
   LinkedListNode* curr=head;
    LinkedListNode*  temp=head;
    
while(curr!=NULL){
    temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
    
     }
    return prev;
}
// APPROACH 2 - RECURSION
void solve(LinkedListNode* & head,LinkedListNode* curr,LinkedListNode* prev){
    // base case
    if(curr==NULL){
        head=prev;
        return;
    }
    LinkedListNode* forward=curr->next;
    curr->next=prev;
    solve(head,forward,curr);
}
LinkedListNode*reverseLinkedList(LinkedListNode *head) 
{
 LinkedListNode*curr=head;
 LinkedListNode*prev=NULL;
 solve(head,curr,prev);
 return head;
}


int main(){

    return 0;
}