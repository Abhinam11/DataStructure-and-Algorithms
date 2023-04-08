#include<bits/stdc++.h>
using namespace std;
vector<int> intersection_of_array(int arr1[],int n,int arr2[],int m){
   // int n=sizeof(arr1)/sizeof(int);
    //int m=sizeof(arr2)/sizeof(int);
    vector<int>ans;
    for(int i=0;i<n;i++){
        int element=arr1[i];
        for(int j=0;j<m;j++){
            if(element==arr2[j]){
                ans.push_back(element);
            element=-2222;
            break;
            }
        }
    }
    return ans;
}
int main(){
    int arr1[3]={1,2,3};
    int arr2[5]={3,4,5,3,2};
    vector<int>v=intersection_of_array(arr1,3,arr2,5);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}