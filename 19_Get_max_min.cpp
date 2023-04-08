#include<bits/stdc++.h>
using namespace std;
int get_max(int arr[],int n){
   // int n=sizeof(arr)/sizeof(int);
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    return ans;
}
int get_min(int arr[],int n){
    //int n=sizeof(arr)/sizeof(int);
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<ans)
        ans=arr[i];
    }
    return ans;
}
int main(){
    int dost[7];
    for(int i=0;i<7;i++){
        cin>>dost[i];
    }
    cout<<"maximum of array is : "<<get_max(dost,7)<<" and minimum of array is : "<<get_min(dost,7)<<endl;
    return 0;
}