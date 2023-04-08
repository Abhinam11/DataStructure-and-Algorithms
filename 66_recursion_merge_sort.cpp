#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
       int mid=s+(e-s)/2;
       int len1=mid-s+1;
       int len2=e-mid;
       int *first=new int[len1];
       int *second=new int[len2];
       //copy
       int mainarrayindex=s;
       for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
       }
       mainarrayindex=mid+1;
       for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
       }
// merging
       int index1=0;
       int index2=0;
       mainarrayindex=s;
       while(index1<len1&&index2<len2){
        if(first[index1]==second[index2]){
            arr[mainarrayindex++]=first[index1++];index2++;
        }
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
       }
       while(index1<len1){
        arr[mainarrayindex++]=first[index1++];

       }
       while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
       }
       delete []first;
       delete []second;
}
void merge_sort(int *arr,int s,int e ){
    //base case
    if(s>=e)return;

    int mid=s+(e-s)/2;
    //sort the left half
    merge_sort(arr,s,mid);
    //sort the right half
    merge_sort(arr,mid+1,e);
    //merge
      merge(arr,s,e);
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}