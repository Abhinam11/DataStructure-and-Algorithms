#include<bits/stdc++.h>
using namespace std;
int last_occurence(int arr[],int n,int key){
    
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            //cout<<mid<<" ";
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;;
        }
        else{
            //cout<<"yes";
        e=mid-1;
        }
       // mid=s+(e-s)/2;
    }
    return ans;
}
int first_occurence(int arr[],int n,int key){
    
    int s=0;
    int e=n-1;
    int ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            //cout<<mid<<" ";
            //return mid;
        ans=mid;
        e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;;
        }
        else{
            //cout<<"yes";
        e=mid-1;
        }
       // mid=s+(e-s)/2;
    }
    return ans;
}
int total_occurence(int arr[],int n,int k){
    return (last_occurence(arr,n,k)-first_occurence(arr,n,k))+1;
}
int main(){
    int arr[8]={0,1,2,3,3,3,3,5};
    int key;
    cout<<"which element occurence you want :";
    cin>>key;
    int x=total_occurence(arr,8,key);
     cout<<"total occurence of element is :"<<x<<endl;
    return 0;
}