#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v){
          int s=0;
          int e=v.size()-1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
vector<int> findArraySum(int a[], int n,int b[], int m) {
	
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0;
//   int sum=0;
    
    while(i>=0 && j>=0){
//         int val1=a[i];
//         int val2=b[j];
      int sum=a[i]+b[j]+carry;
        carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
      while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
      while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        
    }
//     reverse(ans);
//     return ans;
    return reverse(ans);
}

int main(){
    int a[3]={1,2,3};
    int b[4]={3,5,6,8};
    vector<int> ans=findArraySum(a,3,b,4);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}