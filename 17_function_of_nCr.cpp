#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}
int nCr(int n,int r){
    int a=factorial(n);
    int c=n-r;
    int b=factorial(c);
    int x=factorial(r);
    int y=b*x;
    int ans=a/y;
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    int x=nCr(n,r);
    cout<<x<<endl;
    
    return 0;
}