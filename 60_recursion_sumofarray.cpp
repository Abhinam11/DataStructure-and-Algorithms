#include<bits/stdc++.h>
using namespace std;
int recsum(int *arr,int n){
    int ans=0;
    //base case
    if(n==0)
    return 0;
    if(n==1)
    return arr[0];
    //recursive relation
    ans=arr[0]+recsum(arr+1,n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int sum=recsum(arr,n);
    cout<<"sum of array is "<<sum<<endl;
    return 0;
}