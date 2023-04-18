#include<bits/stdc++.h>
using namespace std;
string reverse(string str){
    string ans="";
    stack<char>s;
    for(int i=0;i<str.length();i++){
        //char ch=str[i];
        s.push(str[i]);
    }
    while(!s.empty()){
        ans+=s.top();
        s.pop();
        }
        return ans;
}
int main(){
    string str;
    cin>>str;
    str=reverse(str);
    cout<<str<<endl;;
    return 0;
}