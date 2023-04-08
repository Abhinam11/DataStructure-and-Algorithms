#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0)return 1;
    if(b==1)return a;
    //recursive call
    int ans=power(a,b/2);
    if(b&1){
        return a*ans*ans;
    }
    else{
        return ans*ans;
    }
    }
int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl;
    int ans=power(a,b);
    cout<<ans<<endl;
    return 0;
}