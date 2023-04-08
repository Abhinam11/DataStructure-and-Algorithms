#include <bits/stdc++.h>
using namespace std;
string replaceSpaces(string &str){

    string temp="";
//     int n=str.length();
    for(int i=0;i<str.length();i++){
           if(str[i]==' '){
               temp.push_back('@');
               temp.push_back('4');
               temp.push_back('0');
           }
        else{
              temp.push_back(str[i]);
           }
        }
    return temp;
}

int main()
{

    string str={"my name is abhi"};
    // int len=strlen(str);
    // cin.getline(str);
    // cout<<str;
    cout<<replaceSpaces(str);
    //  cout<<str;
    return 0;
}
