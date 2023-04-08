#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n,int key){
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        ans=i;
    }
    return ans;
}
int main(){
    int arr[7]={4,6,2,8,-2,5,-3};
    int x=linear_search(arr,7,-2);
    if(x<0){
        cout<<"yes element is not present  "<<endl;
    }
    else{
          
        cout<<"yes element is present at index "<<x<<endl;
    }
    return 0;
}