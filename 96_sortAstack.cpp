#include <bits/stdc++.h>
using namespace std; 
void sortedinsert(stack<int> &stack,int x){
	//base case
	if(stack.empty()){
		stack.push(x);
		return;
	}
	int num=stack.top();
	if(num<x){
		stack.push(x);
		return;
	}
	else{
		stack.pop();
	}

	// recursive call
	sortedinsert(stack,x);

    stack.push(num);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	// base case 
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();

	// recursive call
	sortStack(stack);

	sortedinsert(stack,num);
}
void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);
    printStack(s);
    cout<<endl;
    sortStack(s);
    printStack(s);
    cout<<endl;
    return 0;
}