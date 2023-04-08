#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int i=1;
    while(i<=n){
      int j=n-i+1;
      while(j){
        cout<<"*";
        j--;
      }
      
        cout<<endl;
        i++;
    }
    return 0;
}