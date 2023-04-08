#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[][3],int row,int col,int k){
    int index=-1;
    int s=0,e=row*col-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int element=arr[mid/col][mid%col];
        if(element==k){
            index=mid;
        }
        if(element>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return index;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
           cin>>arr[i][j];
        }
    }
    int k;
    cin>>k;
    cout<<endl;
     int x=binarysearch(arr,3,3,k);
        if(x==-1){
            cout<<" element is not present"<<endl;
        }
        else{
            cout<<" element is present at index : "<<x<<endl;
        }
    return 0;
}