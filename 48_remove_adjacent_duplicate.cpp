#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abbaca";
    int i=0;
    while(i<s.length())
    {
        if(s[i]==s[i+1]){
            s.erase(i,2);
            if(i>0){
                i--;
            }
                    }
                    else{
                        i++;
                    }
    }
    cout<<s<<endl;
    return 0;
}