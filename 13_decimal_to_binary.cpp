#include<bits/stdc++.h>
using namespace std;
vector<int> dec_to_binary(int n){
    vector<int>ans;
    while(n!=0){
        int x=n%2;
        ans.push_back(x);
        n=n/2;
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    vector<int>v;
    v=dec_to_binary(n);
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}