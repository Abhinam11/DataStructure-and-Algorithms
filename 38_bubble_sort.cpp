#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
           for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
           }
}
void bubble_sort(int arr[],int n){
   for(int i=1;i<n-1;i++){
    for(int j=0;j<(n-i);j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   }
}
int main(){
    int arr[6]={10,1,7,6,14,9};
    bubble_sort(arr,6);
    printarray(arr,6);
    return 0;
}