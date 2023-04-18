#include <bits/stdc++.h> 
using namespace std;

void solve(stack<int>& myStack, int x){
    //base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    int num=myStack.top();
    myStack.pop();

    //recursive call
    solve(myStack,x);

    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}
void prinstack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
        }
}
int main(){
    stack<int>s;
        s.push(7);
        s.push(1);
        s.push(5);
        s.push(4);
        prinstack(s);
        cout<<endl;
        s=pushAtBottom(s,9);
        prinstack(s);
        cout<<endl;
        return 0;
}
