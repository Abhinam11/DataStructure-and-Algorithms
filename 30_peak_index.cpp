#include<bits/stdc++.h>
using namespace std;
int peak_index(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
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
    int arr[4]={3,10,15,1};
    int x=peak_index(arr,4);
    cout<<" peak index is : "<<x<<endl;
    return 0;
}