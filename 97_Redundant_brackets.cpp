#include <bits/stdc++.h> 
using namespace std;
bool findRedundantBrackets(string &str)
{
    // Write your code here.
    stack<char>s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='(' || ch=='+' || ch=='*' || ch=='/' || ch=='-'){
            s.push(ch);
        }
        else{
            if(ch==')'){
                bool redundant=true;
                while(s.top()!='('){
                    int num=s.top();
                    if (num == '+' || num == '*' || num == '/' || num == '-') {
                      redundant = false;
                    }
                    s.pop();
                }
                if (redundant)
                  return true;
                  s.pop();
            }
        }
    }
    return false;
}
int main(){
    string str;
    cin>>str;
    if(findRedundantBrackets(str)){
        cout<<"redundant"<<endl;
    }
    else{
        cout<<"not redundant"<<endl;
        }
    return 0;
}