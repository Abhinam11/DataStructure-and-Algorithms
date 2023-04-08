#include<bits/stdc++.h>
using namespace std;
int unique_element(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
       ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,2,1,2,5};
    int x=unique_element(arr,5);
  cout<<x<<endl;
    return 0;
}