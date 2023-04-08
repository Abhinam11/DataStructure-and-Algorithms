#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int i=1;
    int count=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<count<<" ";
            count++;
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