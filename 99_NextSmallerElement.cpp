#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i=n-1; i>=0 ; i--) {
        int curr = arr[i];
        while(s.top() >= curr)
        {
            s.pop();
        }
        //ans is stack ka top
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}
int main(){
    vector<int>arr={2,1,4,3};
        vector<int> ans=nextSmallerElement(arr);
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    return 0;
}