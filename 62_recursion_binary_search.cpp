#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){
    int mid=s+(e-s)/2;
    //base case
    if(s>e){
        return -1;
    }
    
    
    if(arr[mid]==key){
        return mid;
    }
    //recursive relation
    if(arr[mid]>key){
        e=mid-1;
        int left=binarysearch(arr,s,e,key);
        return left;
    }
    
    else{
        s=mid+1;
        int right=binarysearch(arr,s,e,key);
        return right;
    }
}
int main(){
    int n,key;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cin>>key;
    cout<<endl;
    int ans=binarysearch(arr,0,n,key);
    if(ans==-1){
        cout<<"element is not present"<<endl;

    }
    else{
        cout<<"element  is present at index :"<<ans<<endl;
    }
    return 0;
}