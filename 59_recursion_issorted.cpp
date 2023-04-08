#include<bits/stdc++.h>
using namespace std;
bool issorted(int *arr,int n){
    //base case 
    if(n==0 || n==1){
        return true;
    }
    //processing
    if(arr[0]>arr[1])
    return false;
    //recursive false
    bool ans=issorted(arr+1,n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    bool ans=issorted(arr,n);
    if(ans){
        cout<<"Yes array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted "<<endl;
    }
    return 0;
}