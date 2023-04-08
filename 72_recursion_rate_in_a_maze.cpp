#include<bits/stdc++.h>
using namespace  std;
bool issafe(vector<vector<int>>& m,int n,vector<vector<int>> visited,int x,int y){
           if((x>=0 && x<n) && (y>=0 && y<n) && m[x][y]==1 && visited[x][y]==0){
            return true;
           }
           else{
            return false;
           }
}
void solve(vector<vector<int>>& m,string output,int n,int x,int y,vector<string>& ans,vector<vector<int>> visited){
    //base case
    if(x==(n-1) && y==(n-1)){
        ans.push_back(output);
        return ;
    }
    //we have reached x,y
    visited[x][y]=1;
     
     //four choices
     //D/L/R/U
     //down
     int newx=x+1;
     int newy=y;
     if(issafe(m,n,visited,newx,newy)){
        output.push_back('D');
        solve(m,output,n,newx,newy,ans,visited);
        output.pop_back();
     }
     //left
     newx=x;
     newy=y-1;
     if(issafe(m,n,visited,newx,newy)){
        output.push_back('L');
        solve(m,output,n,newx,newy,ans,visited);
        output.pop_back();
     }
     //right
     newx=x;
     newy=y+1;
     if(issafe(m,n,visited,newx,newy)){
        output.push_back('R');
        solve(m,output,n,newx,newy,ans,visited);
        output.pop_back();
     }
     //UP
     newx=x-1;
     newy=y;
     if(issafe(m,n,visited,newx,newy)){
        output.push_back('U');
        solve(m,output,n,newx,newy,ans,visited);
        output.pop_back();
     }
     
     visited[x][y]=0;
}
vector<string> rateinMaze(vector<vector<int>>& m,int n){
            vector<string>ans;
            if(m[0][0]==0){
                return ans;
                     }
         string output="";
            int x=0;
            int y=0;
           vector<vector<int>>visited=m;
           //initialising visited as unvivited
           for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
           }
           solve(m,output,n,x,y,ans,visited);
           sort(ans.begin(),ans.end());
           return ans;

}
int main(){
    int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
    vector<string>result=rateinMaze(m,n);
    for(string i:result){
        cout<<i<<" ";
    }
    return 0;
}