#include<bits/stdc++.h>
using namespace std;
void solve(string nums,vector<string>& ans,int index){
    //base case
    if(index>=nums.length()){
        ans.push_back(nums);
        return;
    }
    // recursive call
    for(int j=index;j<nums.length();j++){
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);
        //backtrack
        swap(nums[index],nums[j]);
    }
}
vector<string> permute(string nums){
    vector<string>ans;
    if(nums.size()==0)return ans;
    int index=0;
    solve(nums,ans,index);
    return ans;
}
int main(){
    string nums;
    cin>>nums;
    vector<string>ans=permute(nums);
    for(string i:ans){
        cout<<i<<" ";
    }
    return 0;
}