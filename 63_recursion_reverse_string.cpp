#include <bits/stdc++.h>

using namespace std;

void reverse(int i,int j,string &s){
    //base case 
    if(i>j){
        return;
    }
    //processing
    swap(s[i++],s[j--]);
    //recursive call
    reverse(i,j,s);
}

int main()
{
   
    string s="abcde";
    int n=s.length()-1;
    reverse(0,n,s);
    cout<<s<<endl;
    return 0;
}
