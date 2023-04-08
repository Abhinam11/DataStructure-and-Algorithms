#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key){
    
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            //cout<<mid<<" ";
            return mid;
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
    return -1;
}
int main(){
    int arr[5]={4,45,67,89,342};
    int x=binary_search(arr,5,67);
    if(x<0){
        cout<<"element is not present  "<<endl;
    }
    else{
          
        cout<<"yes element is present at index "<<x<<endl;
    }
    return 0;
}