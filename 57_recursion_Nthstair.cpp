#include<bits/stdc++.h>
using namespace std;
int Nthstair(int n){
    //base case
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    
    //recursive call
    int ans=Nthstair(n-1)+Nthstair(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    cout<<"no. of possible ways to reach nth stair using one or two steps is : "<<Nthstair(n)<<endl;
    return 0;
}