#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int i=1;
    while(i<=n){
          int sp=n-i;
          while(sp){
            cout<<" ";
            sp--;
          }  
          int j=1;
          while(j<=i){
            cout<<"*";
            j++;
          }
        cout<<endl;
        i++;
    }
    return 0;
}