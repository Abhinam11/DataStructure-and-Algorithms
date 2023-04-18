#include<bits/stdc++.h>
using namespace std;
void insertAtButtom(stack<int> &stack,int element){
    //base case
    if(stack.empty()){
        stack.push(element);
        return;
    }
    int num=stack.top();
    stack.pop();

    //recursive call
    insertAtButtom(stack,element);

    stack.push(num);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    //base case
    if(stack.empty()){
        return;
    }
    int num=stack.top();
    stack.pop();
    
    //recursive call
    reverseStack(stack);

    insertAtButtom(stack,num);

}
void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(3);
    s.push(4);
    s.push(7);
    s.push(9);
    printStack(s);
    cout<<endl;
    reverseStack(s);
    printStack(s);
    cout<<endl;
    return 0;
}