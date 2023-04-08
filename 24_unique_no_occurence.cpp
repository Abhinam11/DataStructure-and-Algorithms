#include<bits/stdc++.h>
using namespace std;
int unique_occurence(int arr[],int n){
    int count[n+1]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(count[i]==1)
        ans=i;
    }
    return ans;
}
int main(){
    int arr[5]={1,2,1,2,3};
    int x=unique_occurence(arr,5);
  cout<<x<<endl;
    return 0;
}