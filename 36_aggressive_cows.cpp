#include<bits/stdc++.h>
using namespace std;
bool is_possible(int arr[],int n,int m,int mid){
    int cowcount=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]-lastpos)>=mid){
            cowcount++;
            if(cowcount==m){
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false;
}
int aggressive_cows(int arr[],int n,int m){
    sort(arr,arr+n);
    int s=0;
 int max=INT_MIN;
    for(int i=0;i<n;i++){
    
        if(max<arr[i]){
            max=arr[i];
        }
    }

    int e=max;
    int ans=-1; 
    int mid=s+(e-s)/2;
    while(s<=e){
        if(is_possible(arr,n,m,mid)){
            ans=mid;
            cout<<ans<<" ";
            s=mid+1;;
        }
        else{
            e=mid-1;

        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[5]={4,2,1,3,6};
    int m;
    cout<<"no. of cows : "; 
    cin>>m;
    int x=aggressive_cows(arr,4,m);
    cout<<"maximum of minimum distance : "<<x<<endl;
    return 0;

}