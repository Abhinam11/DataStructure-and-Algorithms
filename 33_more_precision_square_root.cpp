#include<bits/stdc++.h>
using namespace std;
int temp_root(int n){
    int ans;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid*mid<=n){
            ans=mid;
               s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double precision_square(int n,int x){
    //int temp=temp_root(n);
    double factor=1,ans=temp_root(n);
    for(int i=0;i<x;i++){
        factor=factor/10;
        for(double j=0;j*j<=n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<"upto which decimal : ";
    int x;
    cin>>x;
    cout<<precision_square(n,x)<<endl;
    return 0;
}