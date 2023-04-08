#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int i=1;
    while(i<=n){
        int j=i;
        while(j>=1){
            cout<<j;
            j--;
        }
        // for(int j=0;j<i;j++){
        //     cout<<"*";
        // }
        cout<<endl;
        i++;
    }
    return 0;
}