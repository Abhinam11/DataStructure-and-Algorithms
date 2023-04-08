#include<bits/stdc++.h>
using namespace std;
void sort_0_1_problem(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i++],arr[j--]);
        }
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
    
        }
    }
}
int main(){
    int arr[7]={0,1,0,1,1,0,0};
    sort_0_1_problem(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}