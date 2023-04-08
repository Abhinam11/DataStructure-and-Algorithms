#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void move_zeros(int arr[],int n){
    int i=0;
    // int j=n-1;
    // while 
    // (i<=j){
    //     if(arr[i]==0 && arr[j]!=0){
    //         swap(arr[i++],arr[j--]);
    //     }
    //     if(arr[i]!=0){
    //         i++;
    //     }
    //     if(arr[j]==0){
    //         j--;
    //     }
    // }
 
 for(int j=0;j<n;j++){
     if(arr[j]!=0){
         swap(arr[j],arr[i]);
        /// print_array(arr,n);
         cout<<endl;
         i++;
         //cout<<i<<"  ";
       }
     }
}
int main(){
    int arr[5]={0,1,0,3,12};
    move_zeros(arr,5);
    print_array(arr,5);
    return 0;
}