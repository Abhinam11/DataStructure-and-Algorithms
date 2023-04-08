#include<bits/stdc++.h>
using namespace std;
int square_root(int n){
    int ans;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid*mid<=n){
            ans=mid;
               s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<square_root(n)<<endl;
    return 0;
}