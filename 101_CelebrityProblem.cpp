//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    bool knows(vector<vector<int> >& M,int a,int b, int n){
        if(M[a][b]==1)return true;
        else return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // step1:put all element in stack
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        //step2:compare two element 
        while(s.size()!=1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        //last remaining element is a potential candidate
        int ans=s.top();
        //step3: verify potential candidate
        bool rowcheck=false;
        int countzero=0;
        for(int i=0;i<n;i++){
            if(M[ans][i]==0)
            countzero++;
        }
        
        if(countzero==n) rowcheck=true;
        
        //colcheck
        bool colcheck=false;
        int countone=0;
        for(int i=0;i<n;i++){
            if(M[i][ans]==1)countone++;
        }
        
        if(countone==n-1)colcheck=true;
        
        if(colcheck==true && rowcheck==true)return ans;
        else return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends