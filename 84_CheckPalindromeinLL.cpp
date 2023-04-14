#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
//**************************APPROACH1***********using vector
    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int>ans;
        Node*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        int i=0,j=ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
//************************APPROACH2********************
Node*getmid(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL &&  slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
Node* reverse(Node*head){
    Node*curr=head;
    Node*prev=NULL;
    Node*forward=NULL;
    while(curr!=NULL){
        curr->next=forward;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool IsPalindrome(Node *head){
       if(head==NULL || head->next==NULL){
        return true;
       }
       //step1->get middle 
       Node*middle=getmid(head);
       //step2->reverse the second half
       Node*temp=middle->next;
       middle->next=reverse(temp);
       //step3->compare both halves
       Node*head1=head;
       Node*head2=middle->next;
       while(head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
            head1=head->next;
            head2=head2->next;
        
       }
        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
       return true;
}
int main(){
    Node*head=new Node(2);
    Node*first=new Node(4);
    Node*second=new Node(4);
    Node*third=new Node(2);
    head->next=first;
    first->next=second;
    second->next=third;
    print(head);
    cout<<endl;
    if(IsPalindrome(head)){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
    return 0;
}