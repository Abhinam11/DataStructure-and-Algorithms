#include<bits/stdc++.h>
using namespace std;
void printSum(int arr[][3],int roe,int col){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cin>>arr[i][j];
        }
    }
    printSum(arr,3,3);
    return 0;
}