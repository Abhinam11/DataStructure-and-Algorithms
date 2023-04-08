#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
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