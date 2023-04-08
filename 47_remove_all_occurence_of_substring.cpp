#include <bits/stdc++.h> 
using namespace std;
class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
    
        string temp="";
        temp=s[0];
        for(int i=1;i<s.length();i++){
            if(s[i-1]!=s[i]){
                temp=temp+s[i];
            }
            
        }
        return temp;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 


