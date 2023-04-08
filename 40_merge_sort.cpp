#include<bits/stdc++.h>
using namespace std;
vector<int> merge_sort(int arr1[],int n,int arr2[],int m){
   vector<int>v;
   int k=0;
   int i=0;
   int j=0;
   int index=n+m;
   while(i<n && j<m && k<index)
   {
      if(arr1[i]==arr2[j]){
        v.push_back(arr1[i]);
        i++;j++;k++;
      }
      else if(arr1[i]<arr2[j]){
        v.push_back(arr1[i]);
        i++;k++;
      }
      else{
        v.push_back(arr2[j]);
        j++;k++;
      }
   }
   while(i<n && k<index){
    v.push_back(arr1[i]);
    i++;k++;
   }
   while(j<m && k<index){
    v.push_back(arr2[j]);
    j++;k++;
   }
   return v;
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    vector<int> ans=merge_sort(arr1,5,arr2,3);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}