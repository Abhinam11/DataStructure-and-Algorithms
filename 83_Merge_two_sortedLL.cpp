#include<bits/stdc++.h>
using namespace std;
class Node {
        public:
        int data;
        Node* next;

        Node(int data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

//***********************************************************/

Node* solve(Node* first, Node* second)

{

 

    if(first->next == NULL)

    {

        first->next = second;

        return first;

    }

    Node* curr1 = first;

    Node* next1 = curr1->next;

    Node* curr2 = second;

    Node* next2 = curr2->next;

 

    //for traversing the list and check curr2 & next1 should not null

 

    while(next1!=NULL && curr2!=NULL)

    {

        if((curr2->data >= curr1->data) && (curr2->data <= next1->data))//for entering value in between

        {

            //add node in between the list

 

            curr1->next = curr2;

            next2 = curr2->next;

            curr2->next = next1;

 

            //update the pointer

 

            curr1 = curr2;

            curr2 = next2;

        } 

        else

        {

            //increase thr curr1 * next1

            curr1 = next1;

            next1 = next1->next;

 

            //checking that next1 should not null

            if(next1 == NULL)

            {

                curr1->next = curr2;

                return first;

            }

        }

    }

    return first;

}

 

Node* sortTwoLists(Node* first, Node* second)

{

    // Write your code here.

    if(first == NULL)

    {

        return second;

    }

 

    if(second == NULL)

    {

        return first;

    }

 

    //compare the list which always smaller

 

    if(first->data <= second->data)

    {

        return solve(first,second);

    }

 

    else

    {

        return solve(second,first);

    }

}


void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*head=new Node(3);
    Node* first=new Node(5);
    Node* second=new Node(8);
    Node* third=new Node(10);
    Node* fourth=new Node(23);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    
    print(head);
    cout<<endl;

     Node*head2=new Node(4);
    Node* first2=new Node(6);
    Node* second2=new Node(12);
    Node* third2=new Node(15);
    Node* fourth2=new Node(21);
    head2->next=first2;
    first2->next=second2;
    second2->next=third2;
    third2->next=fourth2;

    print(head2);
    cout<<endl;
 
    Node*temp=sortTwoLists(head,head2);

    print(temp);
    cout<<endl;
    return 0;
}