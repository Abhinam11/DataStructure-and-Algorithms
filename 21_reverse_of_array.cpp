#include<bits/stdc++.h>
using namespace std;
void reverse_arr(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
}
int main(){
    int arr[4]={1,2,3,4};
    reverse_arr(arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}