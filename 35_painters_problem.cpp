#include<bits/stdc++.h>
using namespace std;
bool is_possible(int arr[],int n,int m,int mid){
    int paintercount=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
          paintercount++;
          if(paintercount>m || arr[i]>mid){
            return false;
          }
        sum=arr[i];

        }
    }
    return true;
}
int painters_problem(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(is_possible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;

        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[4]={5,5,5,5};
    int m;
    cout<<"no. of painters : "; 
    cin>>m;
    int x=painters_problem(arr,4,m);
    cout<<"minimum time is : "<<x<<endl;
    return 0;

}