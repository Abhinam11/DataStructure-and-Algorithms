#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
        int fibno=a+b;
        cout<<fibno<<" ";
        a=b;
        b=fibno;
    }
    return 0;
}