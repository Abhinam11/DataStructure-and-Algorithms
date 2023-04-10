#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
Node* insert_at_head(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
    return temp;
}
Node* insert_at_tail(Node* & head,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
        return temp;
        }
        Node* temp1=head;
        while (temp1->next!=NULL)
        {
            /* code */
            temp1=temp1->next;
        }
        temp1->next=temp;
        return head;
        
}
void printlinkedlist(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        }
}
Node* insert_at_middle(Node* &head,int data,int p){
            Node* temp=new Node(data);

        Node* temp1=head;
        int x=1;
        while(x<p){
            temp1=temp1->next;
            x++;
        }
        temp->next=temp1->next;
        temp1->next=temp;
        return head;
}
   Node* deletehead(Node* &head){
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
    // temp=temp->next;
    // head->next=NULL;
    // head=temp;
    // return head;
   }    
   Node* deletetail(Node* & head){
    Node*temp=head;
   // Node*temp1=head;
   while(temp->next->next!=NULL){
    temp=temp->next;
   }
   temp->next=NULL;
   return head;

   }  
   Node* deletemiddle(Node* & head,int p){
    Node* temp=head;Node*temp1=NULL;
    if(p==1){
        deletehead(head);
        return head;
    }
    int x=1;
    while (x<p)
    {
        /* code */
        temp1=temp;
        temp=temp->next;
        x++;
    }
    temp1->next=temp->next;
    delete temp;
    return head;
   
   }    
int main(){
      Node *node1=new Node(10);
      Node *node2=new Node(20);
      cout<<node1->data<<" "<<node1->next<<endl;
      cout<<node2->data<<" "<<node2->next<<endl;
      Node* head=node1;
      printlinkedlist(head);
      cout<<endl;
      insert_at_head(head,20);
      insert_at_head(head,9);

      printlinkedlist(head);
      cout<<endl;
      insert_at_tail(head,23);
      insert_at_tail(head,22);
      printlinkedlist(head);
      cout<<endl;
      insert_at_middle(head,63,3);
      printlinkedlist(head);
      cout<<endl;
      deletehead(head);
      printlinkedlist(head);
      cout<<endl;
      deletetail(head);
      printlinkedlist(head);
      cout<<endl;
      deletemiddle(head,2);
      printlinkedlist(head);
    return 0; 
}