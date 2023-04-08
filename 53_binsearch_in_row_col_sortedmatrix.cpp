#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int arr[][4],int row,int col,int k){
    //int index=-1;
     int rowindex=0;
     int colindex=col-1;
    while(rowindex<row && colindex>=0){
         int element=arr[rowindex][colindex];
        if(element==k){
            return 1;
        }
        if(element>k){
            colindex--;
        }
        else{
            rowindex++;
        }
    }
    return 0;
}
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            
           cin>>arr[i][j];
        }
    }
    int k;
    cin>>k;
    cout<<endl;
     int x=binarysearch(arr,4,4,k);
        if(x==-1){
            cout<<" element is not present"<<endl;
        }
        else{
            cout<<" element is present "<<endl;
        }
    return 0;
}