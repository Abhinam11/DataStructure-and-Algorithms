#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
           for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
           }
}
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
                swap(arr[i],arr[minindex]);
    }
}
int main(){
    int arr[6]={1,7,9,2,3,0};
    selection_sort(arr,6);
    printarray(arr,6);
    return 0;
}