#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(int i,int j,string s){
    // base case 
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        i++;j--;
    }
    //recursive relation
    bool ans=check_palindrome(i,j,s);
    return ans;
}
int main(){
    string s;
    cin>>s;
    int n=s.size()-1;
    bool ans=check_palindrome(0,n,s);
    if(ans){
        cout<<"yes it is a palindrome"<<endl;
    }
    else{
        cout<<"it's not a palindrome"<<endl;
    }
    return 0;
}