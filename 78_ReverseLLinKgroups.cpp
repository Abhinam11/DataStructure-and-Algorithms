#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
Node* kReverse(Node* & head,int k){
     //base call
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(next != NULL) {
        head -> next = kReverse(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
}
// void print(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//     Node* head = NULL;
//     Node* second = NULL;
//     Node* third = NULL;
//     Node* fourth=NULL;
//     Node* fifth=NULL;

//     // allocate 3 nodes in the heap
//     head = new Node();
//     second = new Node();
//     third = new Node();
//     fourth=new Node();
//     fifth=new Node();

  
//     head->data = 1; // assign data in first node
//     head->next = second; // Link first node with second
  
//     second->data = 2; // assign data to second node
//     second->next = third;
  
//     third->data = 3; // assign data to third node
//     third->next = fourth;

//     fourth->data=4;
//     fourth->next=fifth;
//     fifth->data=5;
//     fifth->next=NULL;

//     print(head);
//     cout<<endl;
//     kReverse(head,2);
//     print(head);
//     cout<<endl;
//     return 0;
// }