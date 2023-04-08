#include<bits/stdc++.h>
using namespace std;
int recursion_fibb(int n){
    //base case
    if(n==0)
    return 0;
    if(n==1)
    return 1;

//recursive relation
int ans=recursion_fibb(n-1)+recursion_fibb(n-2);
return ans;

}
int main(){
 return 0;
}