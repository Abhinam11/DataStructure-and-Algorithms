#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void RemoveDuplicates(Node* head){
    //empty list
    if(head==NULL)return;

    Node*curr=head;
    while(curr!=NULL){
        //if equal

        //curr->next!=NULL is we have to check bcz we want to access curr->next->data ,if curr->next will be NULL and we don't apply condition then segmentation fault will appear

        if((curr->next!=NULL) && curr->data==curr->next->data ){
            Node*temp=curr->next;
            curr->next=temp->next;
            temp->next=NULL;
            delete temp;
        }
        else{  // not equal
           curr=curr->next;
        }
    }
}
void RemoveDuplicatesUNLL(Node* head){
    //emty LL
       if( head == NULL){
        return ;

    }
    unordered_map< int, bool> visited;

    Node *curr = head;
    while( curr -> next != NULL){
        visited[curr -> data ] = true;

        if( visited[curr -> next -> data] == true){
            curr -> next = curr -> next -> next;
        }
        else{
            curr = curr -> next;
        }
    }
   // return head;
}
void print(Node* head){
    //empty list
    if(head==NULL)return;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
    Node* head=new Node(4);
    Node* second=new Node(2);
    Node* third=new Node(5);
    Node* fourth=new Node(4);
    Node* fifth=new Node(2);
    Node* sixth=new Node(2);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;


    print(head);
    cout<<endl;

    //RemoveDuplicates(head);
    RemoveDuplicatesUNLL(head);
    print(head);
    cout<<endl;
    return 0;
}