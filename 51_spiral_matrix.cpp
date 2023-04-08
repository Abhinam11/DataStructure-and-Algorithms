#include<bits/stdc++.h>
using namespace std;
void spiralMatrix(int arr[][3],int row,int col){
    int total=row*col;
    int startingrow=0;
    int startingcol=0;
    int endingrow=row-1;
    int endingcol=col-1;
    int count=0;
    while(count<total){
        //printing starting row
        for(int i=startingcol;i<=endingcol && count<total;i++){
            cout<<arr[startingrow][i]<<" ";
            count++;
        }
        startingrow++;

        //printing end col
        for(int j=startingrow;count<total && j<=endingrow;j++){
            cout<<arr[j][endingcol]<<" ";
            count++;
        }
        endingcol--;

        //printing last row
        for(int i=endingcol;count<total && i>=startingcol;i--){
            cout<<arr[endingrow][i]<<" ";
            count++;
        }
        endingrow--;

        //printing first col
        for(int j=endingrow;count<total && j>=startingrow;j--){
            cout<<arr[j][startingcol]<<" ";
            count++;
        }
        startingcol++;
    }
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
           cin>>arr[i][j];
        }
    }
    spiralMatrix(arr,3,3);
    return 0;
}