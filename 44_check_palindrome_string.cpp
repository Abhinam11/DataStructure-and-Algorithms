#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(string str,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return false;
        }
        s++;e--;

    }
    return true;

}
int main(){
    string str="abcba";
    int n=str.size();
    if(check_palindrome(str,n)){
        cout<<"it's a palindrome"<<endl;
    }
    else{
        cout<<"it's not a palindrome"<<endl;
    }
    return 0;
}