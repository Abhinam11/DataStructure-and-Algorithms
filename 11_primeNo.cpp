#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==2){
      //  cout<<"its a prime no";
        return true;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
           // cout<<"it's a non prime no";
            return false;
        }
           
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n)==true){
        cout<<"it's a prime no";
    }
    else{
        cout<<"it's a non-prime no";
    }
    return 0;
}