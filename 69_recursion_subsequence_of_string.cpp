#include<bits/stdc++.h>
using namespace std;
void solve(string s,vector<string>output,int index,vector<vector<string>>& ans){
    //base case
    if(index>=s.length()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(s,output,index+1,ans);
    //include
    output.push_back(s.substr(index,1));
    solve(s,output,index+1,ans);
}
vector<vector<string>> subsequence_of_string(string s){
    vector<vector<string>>ans;
    vector<string>output;
    int index=0;
    solve(s,output,index,ans);
    return ans;
}
int main(){
      string s;
      cin>>s;
      vector<vector<string>> result=subsequence_of_string(s);
      for (int i = 0; i < result.size(); i++) {
        for (
            auto it = result[i].begin();
            it != result[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}