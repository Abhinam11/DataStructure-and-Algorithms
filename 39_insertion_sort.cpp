#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
           for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
           }
}
void insertion_sort(int arr[],int n){
   for(int i=1;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1]=temp;
   }
}
int main(){
    int arr[7]={10,1,7,4,8,2,11};
    insertion_sort(arr,7);
    printarray(arr,7);
    return 0;
}