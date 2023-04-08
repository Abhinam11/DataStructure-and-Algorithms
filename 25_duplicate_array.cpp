#include<bits/stdc++.h>
using namespace std;
int find_duplicate(int arr[],int n){
    int count[n+1]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;

    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(count[i]>1)
        ans=i;
    }
    return ans;
}
int main(){
    int arr[6]={3,4,5,6,8,4};
    int x=find_duplicate(arr,6);
    cout<<"duplicate element is : "<<x<<endl;
    return 0;
}