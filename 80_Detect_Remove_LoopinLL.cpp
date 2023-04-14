#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node*next;
Node(int d){
    data=d;
    next=NULL;
}
};
// APPROACH 1-----using map
bool IsCircular(Node* head){
      if(head==NULL)return false;
      map<Node*,bool>visited;
      Node*temp=head;
      while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"loop is present at : "<<temp->data<<endl;
            return true;

        }
        visited[temp]=true;
        temp=temp->next;
      }
      return false;
}
// APPROACH 2-----using Flyod Cycle Dtetection
Node* FlyodDetect(Node* head){
    if(head==NULL)return NULL;
    Node*fast=head;
    Node*slow=head;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
            return slow;
        }
    }
   return NULL;
}
Node* getstartingNode(Node* head){
    Node*intersection=FlyodDetect(head);
    if(intersection==NULL)return NULL;
    Node*slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
//*****************Remove The Loop**********************
void RemoveLopp(Node*head){
    if(head==NULL)return;
    Node*startingNodeofLoop=getstartingNode(head);
    Node*temp=startingNodeofLoop;
    while(temp->next!=startingNodeofLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth=new Node(4);
    Node* fifth=new Node(5);
    Node* sixth=new Node(6);
    Node* seventh=new Node(7);
    //head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
  
    //second->data = 2; // assign data to second node
    second->next = third;
  
    //third->data = 3; // assign data to third node
    third->next = fourth;

    //fourth->data=4;
    fourth->next=fifth;
    //fifth->data=5;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=third;
    if(IsCircular(head)){
        cout<<"loop is present "<<endl;
    }
    else{
        cout<<"loop is not present "<<endl;
    }
    
   Node*ans=getstartingNode(head);
   cout<<"The starting node is "<<ans->data<<endl;
   cout<<endl;

   RemoveLopp(head);
   print(head);
   cout<<endl;

    return 0;
}