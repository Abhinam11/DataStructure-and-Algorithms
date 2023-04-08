#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int i=1;
    int count=1;
    while(i<=n){
      int sp=n-i;
      while ( sp)
      {
        /* code*/
        cout<<" ";
        sp--;
      }
      int j=i;
      while ( j)
      {
        cout<<count;
        count++; j--;
      }
      
      
      
        cout<<endl;
        i++;
    }
    return 0;
}