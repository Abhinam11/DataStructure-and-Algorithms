#include <bits/stdc++.h> 
using namespace std;
void solve(stack<int>&inputStack,int count,int size){
   //base case
   if(count==size/2)
   {
      inputStack.pop();
      return;
   }

   int num=inputStack.top();
   inputStack.pop();
   // recursive call
   solve(inputStack,count+1,size);

   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count=0;
   solve(inputStack,count,N);
   
}
void PrintStack(stack<int> s)
{
    // If stack is empty then return
    if (s.empty())
        return;
     
 
    int x = s.top();
 
    // Pop the top element of the stack
    s.pop();
 
    // Recursively call the function PrintStack
    PrintStack(s);
 
    // Print the stack element starting
    // from the bottom
    cout << x << " ";
 
    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(9);
    s.push(12);
    s.push(8);
    s.push(4);
    PrintStack(s);
    deleteMiddle(s,5);
    cout<<endl;
    PrintStack(s);
    cout<<endl;
    return 0;
}