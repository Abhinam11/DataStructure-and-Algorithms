#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A' +i-1;
            cout<<ch;
            j++;
        }
        // for(int j=0;j<i;j++){
        //     cout<<"*";
        // }
        cout<<endl;
        i++;
    }
    return 0;
}