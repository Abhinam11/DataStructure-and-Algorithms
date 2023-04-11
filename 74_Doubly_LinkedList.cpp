#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
        }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* insertathead(Node* & head,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
        return head;
        }
    temp->next=head;
    head->prev=temp;
    head=temp;
    return temp;
}
Node* insertattail(Node* &head,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
        return temp;
        }
        Node* temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
            }
            temp1->next=temp;
            temp->prev=temp1;
            return head;

}
Node* insertatposition(Node* & head,int data,int p){
    Node*temp=new Node(data);
    int cnt=1;
   // Node* temp1=head;
    Node* temp1=NULL;
    Node* temp2=head;
    while(cnt<p){
        temp1=temp2;
        temp2=temp2->next;
        cnt++;
    }
    temp2->prev=temp;
    temp->next=temp2;
    temp->prev=temp1;
    temp1->next=temp;
    return head;
        
        }
        Node* deleteathead(Node* & head){
            Node* temp=head;
            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
            delete temp;
            return head;
        }
        Node* deleteattail(Node* & head){
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->prev->next=NULL;
            temp->prev=NULL;
            delete temp;
            return head;
        }
        Node* deleteatposition(Node* & head,int p){
            Node*temp=head;
            if(p==1){
                deleteathead(head);
                return head;
            }
            int cnt=1;
            while(cnt<p){
                temp=temp->next;
                cnt++;
            }
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            temp->next=NULL;
            temp->prev=NULL;
            delete temp;
            return head;
        }
int main(){
    Node* node1=new Node(9);
    Node* node2=new Node(8);
    Node* node3=new Node(7);
    print(node1);
    cout<<endl;
    Node* head=node1;
    insertathead(head,11);
    print(head);
    cout<<endl;
    insertattail(head,5);
    print(head);
    cout<<endl;
    insertatposition(head,6,3);
    print(head);
    cout<<endl;
    deleteathead(head);
    print(head);
    cout<<endl;
    deleteattail(head);
    print(head);
    cout<<endl;
    insertathead(head,11);
    insertattail(head,5);
    print(head);
    cout<<endl;
    deleteatposition(head,3);
    print(head);
    cout<<endl;
    return 0;
}