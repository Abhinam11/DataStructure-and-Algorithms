#include<bits/stdc++.h>
using namespace std;
int pivot_element(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
           s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={7,9,1,2,3};
    int x=pivot_element(arr,5);
    cout<<"index of pivot element is : "<<x<<" and pivot element is : "<<arr[x]<<endl;
    return 0;
}
