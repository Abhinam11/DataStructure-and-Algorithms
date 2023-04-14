#include<bits/stdc++.h>
using namespace std;
  class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

//********************************/
//*******************************APPROACH1****************************
Node* sortList(Node *head)
{
    Node*temp=head;
    int zerocount=0,onecount=0,twocount=0;
    while(temp!=NULL){
        if(temp->data==0)zerocount++;
        else if(temp->data == 1)onecount++; 
        else if(temp->data == 2)twocount++; 
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zerocount!=0){
            temp->data=0;
            zerocount--;
        }
        else if(onecount!=0){
            temp->data=1;
            onecount--;
        }
        else if(twocount!=0){
            temp->data=2;
            twocount--;
        }
        temp=temp->next;
    }
    return head;

}
//****************************APPROACH2******************using merging LL**********
void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}


Node* sortLList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        
        int value = curr -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2) {
            insertAtTail(twoTail, curr);
        }       
        curr = curr -> next;
    }
    
    //merge 3 sublist
    
    // 1s list not empty
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*head=new Node(1);
    Node* first=new Node(0);
    Node* second=new Node(2);
    Node* third=new Node(1);
    Node* fourth=new Node(2);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    print(head);
    cout<<endl;
    //sortList(head);
    print(head);
    cout<<endl;
    sortLList(head);
    print(head);
    cout<<endl;
    return 0;
}