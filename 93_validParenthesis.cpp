#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string str)
{
    // Write your code here.
    stack<char>s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        //opening bracket,stack push
        if(ch=='(' || ch=='[' || ch=='{'){
            s.push(ch);
        }
           else
         {
             //for closing bracket
             if(!s.empty()) {
                  char top = s.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      s.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }
    
    if(s.empty())
        return true;
    else
        return false;
}
int main()
{
    string str;
    cin>>str;
    if(isValidParenthesis(str)){
    cout<<"it's a valid parenthesis"<<endl;
    }
    else {
        cout<<"it's not a valid parenthesis"<<endl;
    }
    return 0;
    }