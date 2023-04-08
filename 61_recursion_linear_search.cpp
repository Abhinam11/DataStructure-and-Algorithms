#include<bits/stdc++.h>
using namespace std;
bool recsearch(int *arr,int n,int key){

    //base case
    if(n==0)
    return 0;
    if(arr[0]==key)
    return 1;

    //recursive relation
    bool chotiprblm=recsearch(arr+1,n-1,key);
     return chotiprblm;
}
int main(){
    int n,key;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cin>>key;
    cout<<endl;
    bool ans=recsearch(arr,n,key);
    if(ans){
        cout<<"element is present"<<endl;

    }
    else{
        cout<<"element  is not present"<<endl;
    }
    return 0;
}