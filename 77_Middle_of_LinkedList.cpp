#include<bits/stdc++.h>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
//*****************************APPROACH1********************************


    // int countmid(ListNode* head){
    //     int count=1;
    //     ListNode* temp=head;
    //        while(temp->next!=NULL){
    //            count++;
    //            temp=temp->next;
    //        }
    //        return count;
    // }
    // ListNode* middleNode(ListNode* head) {
    //     int x=countmid(head);
    //     int p;
    //     if(x%1){
    //         p=x/2;        
    // }
    // else{
    //     p=x/2+1;
    // }
          
                
    // ListNode* temp=head;
    //  ListNode* temp1=NULL;
    // int count=0;
    // while(count!=p){
    //     temp1=temp;
    //     temp=temp->next;
    //     count++;
    // }
    // return temp1;
    // }

    //*******************************************APPROACH 2***********************************8
    ListNode* middleNode(ListNode* head) {
        //if list is empty
        if(head==NULL)return head;
        if(head->next==NULL)return head;
        ListNode*fast=head->next;
        ListNode*slow=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
        }
        return slow;
     }
};