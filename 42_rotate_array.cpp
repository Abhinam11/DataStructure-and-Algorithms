#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void rotate_array(int arr[],int n,int k){
    int arrr[n];
    for(int i=0;i<n;i++){
        
        arrr[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=arrr[i];
    }
}
int main(){
    int arr[4]={1,7,9,11};
    int n;
    cout<<"rotate by which position :";
    cin>>n;
    rotate_array(arr,4,n);
    print_array(arr,4);
    return 0;
}