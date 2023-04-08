#include<bits/stdc++.h>
using namespace std;
int digit_sum(int n){
    int sum=0;
    int prod=1;
    while(n!=0){
        int dig=n%10;
        sum=sum+dig;
        prod=prod*dig;
        n=n/10;
    }
    int ans= (prod-sum);
    return ans;
}
int main(){
    int n;
    cin>>n;
  int x=digit_sum(n);
  cout<<x<<endl;
  return 0;
}